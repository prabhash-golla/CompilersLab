%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylineno;
int lasterror=-1;
int yylex();  // Function declaration for the lexer
void yyerror(char* s); // Function declaration for error handling
int RegVal=2;
int MemVal=0;

// Define the structure for the parse tree node
typedef struct _SDD {
    char* code;
    int offset;           // Type of node: operator, ID, or NUM
    int type;
} SDD;

// Define the structure for a symbol table entry
typedef struct _node {
    char *name;          // Name of the variable
    long long nocc;           // Value associated with the variable
    struct _node *next; // Pointer to the next node in the symbol table
} node;

typedef node *nametable; // Type alias for a pointer to the symbol table
node* Setter(node*,char*,int*);
extern nametable T; // External symbol table variable

%}

// Union for the semantic values of tokens
%union {
    int num;   // Numeric value
    char* id;  // Identifier
    SDD* node; // Parse tree node
}

// Define the start symbol for parsing
%start PROGRAM

// Token definitions with associated types
%token <num>  SET POW SUB ADD MUL DIV MOD LP RP
%token <id> ID NUM

// Define the types for non-terminal symbols
%type <node> STMT PROGRAM SETSTMT EXPRSTMT 
%type <node> OP ARG EXPR 

%%

// Rules for parsing
PROGRAM:
    STMT PROGRAM 
    | STMT  
    | error
    {
        if(lasterror!=yylineno) //For Handelling Error Occurance
        {
            printf("    printf(\"Syntax Error at Line No %d\\n\");\n",yylineno);
            lasterror = yylineno;
        }
        RegVal =2;
    }
     PROGRAM {yyerrok;} // Rule for a single statement
    ;

STMT:
    SETSTMT   // Rule for a statement being a set statement
    | EXPRSTMT // Rule for a statement being an expression statement
    ;

SETSTMT:
    LP SET ID NUM RP  {
        SDD* Temp = (SDD*) malloc (sizeof(SDD));
        int x=0;
        T = Setter(T,$3,&x);
        Temp->offset = x;
        printf("    MEM[%d] = %s;\n    mprn(MEM, %d);\n", x, $4,x);
        $$ = Temp;
    } // Set a variable to a numeric value
    | LP SET ID ID RP {
        SDD* Temp = (SDD*) malloc (sizeof(SDD));
        int x=0;
        T = Setter(T,$3,&x);
        Temp->offset = x;
        int y=0;
        T = Setter(T,$4,&y);
        Temp->offset = y;
        printf("    R[0] = MEM[%d];\n    MEM[%d] = R[0];\n    mprn(MEM, %d);\n",y,x,x);
        $$ = Temp;
    } // Set a variable to another variable's value
    | LP SET ID EXPR RP {
        SDD* Temp = (SDD*) malloc (sizeof(SDD));
        int x=0;
        T = Setter(T,$3,&x);
        Temp->offset = x;
        printf("    MEM[%d] = R[%d];\n    mprn(MEM, %d);\n",x,$4->offset,x);
        $$ = Temp;
    } // Set a variable to the result of an expression
    ;

EXPRSTMT:
    EXPR {
        SDD* Temp = (SDD*) malloc (sizeof(SDD));
        printf("    eprn(R, %d);\n",$1->offset);
        $$ = Temp;
    } // Print result of standalone expression
    ;

EXPR:
    LP OP ARG ARG RP {
        SDD* Temp = (SDD*) malloc (sizeof(SDD));
        if($3->type==3) RegVal--;
        if($4->type==3) RegVal--;
        if($3->type==4)
        { RegVal--;$3->type=1;}
        if($4->type==4)
        { RegVal--;$4->type=1;}
        if(RegVal>11)
        {
            if(!strcmp($2->code,"^"))
            {
                if($3->type==3 && $4->type==3)
                {
                    printf("    R[0] = pwr(R[%d], R[%d]);\n",$3->offset,$4->offset);
                }
                else if ($3->type==1 && $4->type==3)
                {
                    printf("    R[0] = MEM[%d];\n    R[0] = pwr(R[0], R[%d]);\n",$3->offset,$4->offset);
                }
                else if ($3->type==3 && $4->type==1)
                {
                    printf("    R[0] = MEM[%d];\n    R[0] = pwr(R[%d], R[0]);\n",$4->offset,$3->offset);
                }
                else if ($3->type==1 && $4->type==1)
                {
                    printf("    R[0] = MEM[%d];\n    R[1] = MEM[%d];\n    R[0] = pwr(R[0], R[1]);\n",$3->offset,$4->offset);
                }
                else if($3->type==3 && $4->type==2)
                {
                    printf("    R[0] = pwr(R[%d], %s);\n",$3->offset,$4->code);
                }
                else if ($3->type==2 && $4->type==3)
                {
                    printf("    R[0] = pwr(%s, R[%d]);\n",$3->code,$4->offset);
                }
                else if ($3->type==2 && $4->type==1)
                {
                    printf("    R[0] = MEM[%d];\n    R[0] = pwr(%s, R[0]);\n",$4->offset,$3->code);
                }
                else if ($3->type==1 && $4->type==2)
                {
                    printf("    R[0] = MEM[%d];\n    R[0] = pwr(R[0], %s);\n",$3->offset,$4->code);
                }
                else if ($3->type==2 && $4->type==2)
                {
                    printf("    R[0] = pwr(%s, %s);\n",$3->code,$4->code);
                }
            }
            else
            {
                if($3->type==3 && $4->type==3)
                {
                    printf("    R[0] = R[%d] %s R[%d];\n",$3->offset,$2->code,$4->offset);
                }
                else if ($3->type==1 && $4->type==3)
                {
                    printf("    R[0] = MEM[%d];\n    R[0] = R[0] %s R[%d];\n",$3->offset,$2->code,$4->offset);
                }
                else if ($3->type==3 && $4->type==1)
                {
                    printf("    R[0] = MEM[%d];\n    R[0] = R[%d] %s R[0];\n",$4->offset,$3->offset,$2->code);
                }
                else if ($3->type==1 && $4->type==1)
                {
                    printf("    R[0] = MEM[%d];\n    R[1] = MEM[%d];\n    R[0] = R[0] %s R[1];\n",$3->offset,$4->offset,$2->code);
                }
                else if($3->type==3 && $4->type==2)
                {
                    printf("    R[0] = R[%d] %s %s;\n",$3->offset,$2->code,$4->code);
                }
                else if ($3->type==2 && $4->type==3)
                {
                    printf("    R[0] = %s %s R[%d];\n",$3->code,$2->code,$4->offset);
                }
                else if ($3->type==2 && $4->type==1)
                {
                    printf("    R[0] = MEM[%d];\n    R[0] = %s %s R[0];\n",$4->offset,$3->code,$2->code);
                }
                else if ($3->type==1 && $4->type==2)
                {
                    printf("    R[0] = MEM[%d];\n    R[0] = R[0] %s %s;\n",$3->offset,$2->code,$4->code);
                }
                else if ($3->type==2 && $4->type==2)
                {
                    printf("    R[0] = %s %s %s;\n",$3->code,$2->code,$4->code);
                }
            }
            printf("    MEM[%d] = R[0];\n",MemVal);
            Temp->offset = MemVal++;
            Temp->type = 4;
        }
        else 
        {
            if(!strcmp($2->code,"^"))
            {
                if($3->type==3 && $4->type==3)
                {
                    printf("    R[%d] = pwr(R[%d], R[%d]);\n",RegVal,$3->offset,$4->offset);
                }
                else if ($3->type==1 && $4->type==3)
                {
                    printf("    R[0] = MEM[%d];\n    R[%d] = pwr(R[0], R[%d]);\n",$3->offset,RegVal,$4->offset);
                }
                else if ($3->type==3 && $4->type==1)
                {
                    printf("    R[0] = MEM[%d];\n    R[%d] = pwr(R[%d], R[0]);\n",$4->offset,RegVal,$3->offset);
                }
                else if ($3->type==1 && $4->type==1)
                {
                    printf("    R[0] = MEM[%d];\n    R[1] = MEM[%d];\n    R[%d] = pwr(R[0], R[1]);\n",$3->offset,$4->offset,RegVal);
                }
                else if($3->type==3 && $4->type==2)
                {
                    printf("    R[%d] = pwr(R[%d], %s);\n",RegVal,$3->offset,$4->code);
                }
                else if ($3->type==2 && $4->type==3)
                {
                    printf("    R[%d] = pwr(%s, R[%d]);\n",RegVal,$3->code,$4->offset);
                }
                else if ($3->type==2 && $4->type==1)
                {
                    printf("    R[0] = MEM[%d];\n    R[%d] = pwr(%s, R[0]);\n",$4->offset,RegVal,$3->code);
                }
                else if ($3->type==1 && $4->type==2)
                {
                    printf("    R[0] = MEM[%d];\n    R[%d] = pwr(R[0], %s);\n",$3->offset,RegVal,$4->code);
                }
                else if ($3->type==2 && $4->type==2)
                {
                    printf("    R[%d] = pwr(%s, %s);\n",RegVal,$3->code,$4->code);
                }
            }
            else
            {
                if($3->type==3 && $4->type==3)
                {
                    printf("    R[%d] = R[%d] %s R[%d];\n",RegVal,$3->offset,$2->code,$4->offset);
                }
                else if ($3->type==1 && $4->type==3)
                {
                    printf("    R[0] = MEM[%d];\n    R[%d] = R[0] %s R[%d];\n",$3->offset,RegVal,$2->code,$4->offset);
                }
                else if ($3->type==3 && $4->type==1)
                {
                    printf("    R[0] = MEM[%d];\n    R[%d] = R[%d] %s R[0];\n",$4->offset,RegVal,$3->offset,$2->code);
                }
                else if ($3->type==1 && $4->type==1)
                {
                    printf("    R[0] = MEM[%d];\n    R[1] = MEM[%d];\n    R[%d] = R[0] %s R[1];\n",$3->offset,$4->offset,RegVal,$2->code);
                }
                else if($3->type==3 && $4->type==2)
                {
                    printf("    R[%d] = R[%d] %s %s;\n",RegVal,$3->offset,$2->code,$4->code);
                }
                else if ($3->type==2 && $4->type==3)
                {
                    printf("    R[%d] = %s %s R[%d];\n",RegVal,$3->code,$2->code,$4->offset);
                }
                else if ($3->type==2 && $4->type==1)
                {
                    printf("    R[0] = MEM[%d];\n    R[%d] = %s %s R[0];\n",$4->offset,RegVal,$3->code,$2->code);
                }
                else if ($3->type==1 && $4->type==2)
                {
                    printf("    R[0] = MEM[%d];\n    R[%d] = R[0] %s %s;\n",$3->offset,RegVal,$2->code,$4->code);
                }
                else if ($3->type==2 && $4->type==2)
                {
                    printf("    R[%d] = %s %s %s;\n",RegVal,$3->code,$2->code,$4->code);
                }
            }
            Temp->offset = RegVal;
            Temp->type = 3;
        }
        $$=Temp;
    } // Construct an expression tree
    ;

OP:
    MUL {
        SDD* Temp = (SDD*) malloc (sizeof(SDD));
        Temp->code = "*";
        $$=Temp;
    }
    | ADD {
        SDD* Temp = (SDD*) malloc (sizeof(SDD));
        Temp->code = "+";
        $$=Temp;
    }
    | SUB {
        SDD* Temp = (SDD*) malloc (sizeof(SDD));
        Temp->code = "-";
        $$=Temp;
    }
    | DIV {
        SDD* Temp = (SDD*) malloc (sizeof(SDD));
        Temp->code = "/";
        $$=Temp;
    }
    | MOD {
        SDD* Temp = (SDD*) malloc (sizeof(SDD));
        Temp->code = "%";
        $$=Temp;
    }
    | POW {
        SDD* Temp = (SDD*) malloc (sizeof(SDD));
        Temp->code = "^";
        $$=Temp;
    }

ARG:
    ID {
        SDD* Temp = (SDD*) malloc (sizeof(SDD));
        Temp->code = "";
        Temp->type = 1;
        int x=0;
        T = Setter(T,$1,&x);
        Temp->offset = x;
        $$ = Temp;
    }
    | NUM {
        SDD* Temp = (SDD*) malloc (sizeof(SDD));
        Temp->code = strdup($1);
        Temp->offset = -1;
        Temp->type = 2;
        $$ = Temp;
    }
    | EXPR {
        RegVal++;
        $$ = $1;
    }
    ;

%%

// Error handling function
void yyerror(char* s) {
}
