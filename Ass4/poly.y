%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int yylex();  // Function declaration for the lexer
void yyerror(char* s); // Function declaration for error handling
bool a = 0;

extern char* yytext;
typedef struct _Ptree {
    char* value;  
    struct _Ptree *left; // Pointer to the left subtree
    struct _Ptree *right;
    int val;
    union{
        char i;
        int n;
    } inh;
} Ptree;

Ptree* root;

Ptree* createPtree(char*, Ptree*, Ptree *) ;

%}

%union
{
    int num;
    char* val;
    Ptree *node;
}

%start S

%token <num> ZERO ONE PLUS MINUS VAR POW

%token <val> NUM

%type <node> S P T X N M


%%

S :
    P  {$$ = createPtree("S",$1,NULL);root=$$;}
    | PLUS P  {$$ = createPtree("S",createPtree("+",NULL,NULL),$2);root=$$;}
    | MINUS P {$$ = createPtree("S",createPtree("-",NULL,NULL),$2);root=$$;};

P : 
    T  {$$ = createPtree("P",$1,NULL);}
    | T PLUS P {$$ = createPtree("P",$1,createPtree("ignore",createPtree("+",NULL,NULL),$3));}
    | T MINUS P {$$ = createPtree("P",$1,createPtree("ignore",createPtree("-",NULL,NULL),$3));};

T :
    ONE {$$ = createPtree("T",createPtree("1",NULL,NULL),NULL);}
    | N   {$$ = createPtree("T",$1,NULL);}
    | X     {$$ = createPtree("T",$1,NULL);}
    | N X      {$$ = createPtree("T",$1,$2);};

X : 
    VAR  {a=1;$$ = createPtree("X",createPtree("x",NULL,NULL),NULL);}
    | VAR POW N {a=1;$$ = createPtree("X",createPtree("ignore",createPtree("x",NULL,NULL),createPtree("^",NULL,NULL)),$3);};

N :
    NUM {$$ = createPtree("N",createPtree($1,NULL,NULL),NULL);}
    | ONE M  {$$ = createPtree("N",createPtree("1",NULL,NULL),$2);}
    | NUM M  {$$ = createPtree("N",createPtree($1,NULL,NULL),$2);};

M :
    ZERO  {$$ = createPtree("M",createPtree("0",NULL,NULL),NULL);}
    | ONE {$$ = createPtree("M",createPtree("1",NULL,NULL),NULL);}
    | NUM {$$ = createPtree("M",createPtree($1,NULL,NULL),NULL);}
    | ZERO M {$$ = createPtree("M",createPtree("0",NULL,NULL),$2);}
    | ONE M {$$ = createPtree("M",createPtree("1",NULL,NULL),$2);}
    | NUM M {$$ = createPtree("M",createPtree($1,NULL,NULL),$2);}

%%

void yyerror(char* s) {
    printf("Error : %s \n",s); // Print a generic error message
}