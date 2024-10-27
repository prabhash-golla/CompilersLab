%{
    #include <iostream>
    #include "TinyC3_22CS30027_22CS30019_translator.h"
    // #define YYDEBUG 1 //For Debugging 
    // int yydebug=1;
    
    /*
        Group :- TinyC-67
        Golla Meghanandh Manvith Prabhash :- 22CS30027
        Darapu Adhithya  :- 22CS30019
    */
    using namespace std;
    extern int yylineno;
    int yylex();
    extern string Globe;
    void yyerror(string ERRORS);
   
%}

%union {
    int INTVAL;
    int InstCount;
    float FLOATVAL;
    char* CHARVAL;
    char UnaryOper;
    ArrayType* Array;
    int Parameter;
    Symbol* SymbolPointer;
    Statement* Stateme;
    SType* Type;
    Expression* Express;
}

/*_______ KEYWORDS ________*/

%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE EXTERN REGISTER FLOAT FOR GOTO IF INLINE INT LONG RESTRICT RETURN SHORT SIGNED SIZEOF STATIC SWITCH UNSIGNED VOID VOLATILE WHILE BOOL COMPLEX IMAGINARY

/*_______ PUNCTUATORS AND OPERATORS ________*/

%token SQUARE_BRACKET_OPEN SQUARE_BRACKET_CLOSE ROUND_BRACKET_OPEN ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN CURLY_BRACKET_CLOSE DOT IMPLIES INCREMENT DECREMENT BITWISE_AND MUL PLUS MINUS BITWISE_NOT NOT DIV MOD LEFT_SHIFT RIGHT_SHIFT LESS_THAN GREATER_THAN LESS_EQUAL GREATER_EQUAL EQUAL NOT_EQUAL BITWISE_XOR BITWISE_OR AND OR QUESTION COLON SEMICOLON ELLIPSIS ASSIGN MUL_EQUAL DIV_EQUAL MOD_EQUAL PLUS_EQUAL MINUS_EQUAL SHIFT_LEFT_EQUAL SHIFT_RIGHT_EQUAL BITWISE_AND_EQUAL BITWISE_XOR_EQUAL BITWISE_OR_EQUAL COMMA

/*_______ IDENTIFIER ________*/

%token<SymbolPointer> IDENTIFIER

/*_______ CONSTANTS ________*/

%token<INTVAL> INTEGER 
%token<FLOATVAL> FLOATING_CONSTANT 
%token<CHARVAL> CHARACTER_CONSTANT STRING_LITERAL

%nonassoc THEN
%nonassoc ELSE

%type<Array> postfix_expression unary_expression cast_expression

%type<Parameter> argument_expression_list argument_expression_list_opt

%type<UnaryOper> unary_operator

%type<SymbolPointer> declaration declarator init_declarator direct_declarator initializer

%type<Type> pointer

%type<Stateme> statement iteration_statement jump_statement selection_statement labeled_statement compound_statement  block_item block_item_list block_item_list_opt loop_block

%type<Express> additive_expression  and_expression assignment_expression assignment_expression_opt   conditional_expression constant constant_expression  declaration_list declaration_list_opt 
declaration_specifiers designator designator_list designation designation_opt  exclusive_or_expression expression expression_opt external_declaration function_definition function_specifier identifier_list inclusive_or_expression  
initializer_list  init_declarator_list  logical_and_expression logical_or_expression multiplicative_expression parameter_declaration parameter_list parameter_type_list primary_expression relational_expression
 specifier_qualifier_list shift_expression storage_class_specifier expression_statement
%type<Express> type_name type_qualifier type_qualifier_list type_qualifier_list_opt type_specifier equality_expression    translation_unit init_declarator_list_opt

//Augmenting symbols
%type<Stateme> newstatement
%type<InstCount> countinst
%type forstart whilestart dostart switch_table createST

%start translation_unit

%%


/*__ 1. EXPRESSIONS _______________________________________*/


/*_______ PRIMARY EXPRESSIONS ________*/

constant : INTEGER 
            { 
                $$ = new Expression();
                $$->Location = SymbolTable::GenTemp(new SType("int"),itos($1));
                QuadArray::Emit("=",$$->Location->Name,$1);
            }
         | FLOATING_CONSTANT 
            { 
                $$ = new Expression();
                $$->Location = SymbolTable::GenTemp(new SType("float"),ftos($1));
                QuadArray::Emit("=",$$->Location->Name,$1);
            }
         | CHARACTER_CONSTANT 
            {
                $$ = new Expression();
                $$->Location = SymbolTable::GenTemp(new SType("char"),string($1));
                QuadArray::Emit("=",$$->Location->Name,$1);
            }
         ;

primary_expression : IDENTIFIER 
                    { 
                        Symbol* Temp = CurrentST->LookUp(Globe);
                        $$ = new Expression();
                        $$->Location = Temp;
                        $$->Type = "non_bool";
                    }
                   | constant   
                    { 
                       $$ = $1;
                    }
                   | STRING_LITERAL 
                    { 
                        $$ = new Expression();
                        $$->Location = SymbolTable::GenTemp(new SType("ptr"),string($1));
                        $$->Location->Type->ArrType = new SType("char");
                    }
                   | ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE 
                    {   
                        $$ = $2;
                    }
                   ;

/*_______ POSTFIX EXPRESSIONS ________*/

postfix_expression : primary_expression 
                    { 
                        $$  = new ArrayType();
                        $$->Location = $1->Location;
                        $$->Array = $1->Location;
                        $$->Type = $1->Location->Type;
                    }
                   | postfix_expression SQUARE_BRACKET_OPEN expression SQUARE_BRACKET_CLOSE 
                    {
                        $$  = new ArrayType();
                        $$->Location = SymbolTable::GenTemp("int");
                        $$->Type = $1->Type->ArrType;
                        $$->A_Type = "arr";
                        $$->Array = $1->Array;
                        if($1->A_Type == "arr")
                        {
                            Symbol* Temp = SymbolTable::GenTemp("int");
                            int size = SizeOfS($$->Type);
                            QuadArray::Emit("*",Temp->Name,$3->Location->Name,itos(size));
                            QuadArray::Emit("+",$$->Location->Name,$1->Location->Name,Temp->Name);
                        }
                        else
                        {
                            int size = SizeOfS($$->Type);
                            QuadArray::Emit("*",$$->Location->Name,$3->Location->Name,itos(size));
                        }
                    }
                   | postfix_expression ROUND_BRACKET_OPEN argument_expression_list_opt ROUND_BRACKET_CLOSE 
                    { 
                        $$  = new ArrayType();
                        $$->Array = SymbolTable::GenTemp($1->Type);
                        QuadArray::Emit("call",$$->Array->Name,$1->Array->Name,itos($3));
                    }
                   | postfix_expression DOT IDENTIFIER 
                    { 

                    }
                   | postfix_expression IMPLIES IDENTIFIER 
                    { 

                    }
                   | postfix_expression INCREMENT 
                    {
                        $$  = new ArrayType();
                        $$->Array = SymbolTable::GenTemp($1->Array->Type);
                        QuadArray::Emit("=",$$->Array->Name,$1->Array->Name);
                        QuadArray::Emit("+",$1->Array->Name,$1->Array->Name,"1");
                    }
                   | postfix_expression DECREMENT 
                    { 
                        $$  = new ArrayType();
                        $$->Array = SymbolTable::GenTemp($1->Array->Type);
                        QuadArray::Emit("=",$$->Array->Name,$1->Array->Name);
                        QuadArray::Emit("-",$1->Array->Name,$1->Array->Name,"1");
                    }
                   | ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE 
                    {

                    }
                   | ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE 
                    {

                    }
                   ;

/*_______ ARGUMENT EXPRESSION LIST ________*/

argument_expression_list_opt: 
                        {
                            $$ = 0;
                        }
                        | argument_expression_list 
                        {
                            $$ = $1;
                        }
                        ;

argument_expression_list : assignment_expression 
                        { 
                            $$ = 1;
                            QuadArray::Emit("param",$1->Location->Name);
                        }
                        | argument_expression_list COMMA assignment_expression 
                        { 
                            $$ = $1 + 1;
                            QuadArray::Emit("param",$3->Location->Name);
                        }
                        ;

/*_______ URNARY EXPRESSION ________*/

unary_expression : postfix_expression 
                    {
                        $$ = $1;
                    }
                 | INCREMENT unary_expression 
                    { 
                        QuadArray::Emit("+",$2->Array->Name,$2->Array->Name,"1");
                        $$ = $2;
                    }
                 | DECREMENT unary_expression 
                    { 
                        QuadArray::Emit("-",$2->Array->Name,$2->Array->Name,"1");
                        $$ = $2;
                    }
                 | unary_operator cast_expression 
                    { 
                        $$ = new ArrayType();
                        switch($1)
                        {
                            case '&':
                                $$->Array = SymbolTable::GenTemp(new SType("ptr"));
                                $$->Array->Type->ArrType = $2->Array->Type;
                                QuadArray::Emit("= &",$$->Array->Name,$2->Array->Name);
                                break;
                            case '*':
                                $$->Array = $2->Array;
                                $$->Location = SymbolTable::GenTemp($2->Array->Type->ArrType);
                                $$->A_Type = "ptr";
                                QuadArray::Emit("= &",$$->Location->Name,$2->Array->Name);
                                break;
                            case '+':
                                $$= $2;
                                break;
                            case '-':
                                $$->Array = SymbolTable::GenTemp($2->Array->Type->Type);
                                QuadArray::Emit("= -",$$->Array->Name,$2->Array->Name);
                                break;
                            case '~':
                                $$->Array = SymbolTable::GenTemp($2->Array->Type->Type);
                                QuadArray::Emit("= ~",$$->Array->Name,$2->Array->Name);
                                break;
                            case '!':
                                $$->Array = SymbolTable::GenTemp($2->Array->Type->Type);
                                QuadArray::Emit("= !",$$->Array->Name,$2->Array->Name);
                                break;

                        }
                        
                    }
                 | SIZEOF unary_expression 
                    { 

                    }
                 | SIZEOF ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE 
                    {  

                    }
                 ;

/*_______ URNARY OPERATOR ________*/

unary_operator: BITWISE_AND 
                {
                    $$ = '&';
                }
              | MUL 
                { 
                    $$ = '*';
                }
              | PLUS 
                { 
                    $$ = '+';
                }
              | MINUS 
                { 
                    $$ = '-';
                }
              | BITWISE_NOT 
                { 
                    $$ = '~';
                }
              | NOT 
                {
                    $$ = '!';
                }
              ;

/*_______ CAST EXPRESSION ________*/

cast_expression : unary_expression 
                { 
                    $$ = $1;
                }
                | ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE cast_expression 
                { 
                    $$ = new ArrayType();
                    $$->Array = TypeConvertor($4->Array,VarType);
                }
                ;

/*_______ MULTIPLICATIVE EXPRESSION ________*/

multiplicative_expression : cast_expression 
                            { 
                                $$ = new Expression();
                                if($1->A_Type=="arr")
                                {
                                    $$->Location = SymbolTable::GenTemp($1->Location->Type);
                                    QuadArray::Emit("=[]",$$->Location->Name,$1->Array->Name,$1->Location->Name);
                                }
                                else if($1->A_Type=="ptr")
                                {
                                    $$->Location = $1->Location;
                                }
                                else
                                {
                                    $$->Location = $1->Array;
                                }
                            }
                         | multiplicative_expression MUL cast_expression 
                            { 
                                if(TypeCheck($1->Location,$3->Array))
                                {
                                    $$ = new Expression();
                                    $$->Location = SymbolTable::GenTemp(new SType($1->Location->Type->Type));
                                    QuadArray::Emit("*",$$->Location->Name,$1->Location->Name,$3->Array->Name);
                                }
                                else
                                {
                                    yyerror("Type Mismatch");
                                }
                            }
                         | multiplicative_expression DIV cast_expression 
                            { 
                                if(TypeCheck($1->Location,$3->Array))
                                {
                                    $$ = new Expression();
                                    $$->Location = SymbolTable::GenTemp(new SType($1->Location->Type->Type));
                                    QuadArray::Emit("/",$$->Location->Name,$1->Location->Name,$3->Array->Name);
                                }
                                else
                                {
                                    yyerror("Type Mismatch");
                                }
                            }
                         | multiplicative_expression MOD cast_expression 
                            { 
                                if(TypeCheck($1->Location,$3->Array))
                                {
                                    $$ = new Expression();
                                    $$->Location = SymbolTable::GenTemp(new SType($1->Location->Type->Type));
                                    QuadArray::Emit("%",$$->Location->Name,$1->Location->Name,$3->Array->Name);
                                }
                                else
                                {
                                    yyerror("Type Mismatch");
                                }
                            }
                         ;

/*_______ ADDITIVE EXPRESSION ________*/

additive_expression : multiplicative_expression 
                    { 
                        $$ = $1;
                    }
                   | additive_expression PLUS multiplicative_expression 
                    {
                        if(TypeCheck($1->Location,$3->Location))
                        {
                            $$ = new Expression();
                            $$->Location = SymbolTable::GenTemp(new SType($1->Location->Type->Type));
                            QuadArray::Emit("+",$$->Location->Name,$1->Location->Name,$3->Location->Name);
                        }
                        else
                        {
                            yyerror("Type Mismatch");
                        }
                    }
                   | additive_expression MINUS multiplicative_expression 
                    { 
                        if(TypeCheck($1->Location,$3->Location))
                        {
                            $$ = new Expression();
                            $$->Location = SymbolTable::GenTemp(new SType($1->Location->Type->Type));
                            QuadArray::Emit("-",$$->Location->Name,$1->Location->Name,$3->Location->Name);
                        }
                        else
                        {
                            yyerror("Type Mismatch");
                        }
                    }
                   ;

/*_______ SHIFT EXPRESSION ________*/

shift_expression : additive_expression
                 { 
                    $$ = $1;
                }
                 | shift_expression LEFT_SHIFT additive_expression 
                 { 
                    if($3->Location->Type->Type=="int")
                    {
                        $$ = new Expression();
                        $$->Location = SymbolTable::GenTemp(new SType("int"));
                        QuadArray::Emit("<<",$$->Location->Name,$1->Location->Name,$3->Location->Name);
                    }
                    else
                    {
                        yyerror("Type Error");
                    }
                }
                 | shift_expression RIGHT_SHIFT additive_expression 
                 {
                    if($3->Location->Type->Type=="int")
                    {
                        $$ = new Expression();
                        $$->Location = SymbolTable::GenTemp(new SType("int"));
                        QuadArray::Emit(">>",$$->Location->Name,$1->Location->Name,$3->Location->Name);
                    }
                    else
                    {
                        yyerror("Type Error");
                    }
                }
                 ;

/*_______ RELATIONAL EXPRESSION ________*/

relational_expression : shift_expression 
                    {
                        $$=$1;
                    }
                     | relational_expression LESS_THAN shift_expression 
                    {
                        if(TypeCheck($1->Location,$3->Location))
                        {
                            $$ = new Expression();
                            $$->Type="bool";
                            $$->TrueList= MakeList(QuadList.InstructionList.size());
                            $$->FalseList= MakeList(QuadList.InstructionList.size()+1);
                            QuadArray::Emit("<","",$1->Location->Name,$3->Location->Name);
                            QuadArray::Emit("goto","_");
                        }
                        else
                        {
                            yyerror("Type mismatch");
                        }
                    }
                     | relational_expression GREATER_THAN shift_expression 
                     { 
                        if(TypeCheck($1->Location,$3->Location))
                        {
                            $$ = new Expression();
                            $$->Type="bool";
                            $$->TrueList= MakeList(QuadList.InstructionList.size());
                            $$->FalseList= MakeList(QuadList.InstructionList.size()+1);
                            QuadArray::Emit(">","",$1->Location->Name,$3->Location->Name);
                            QuadArray::Emit("goto","_");
                        }
                        else
                        {
                            yyerror("Type mismatch");
                        }
                    }
                     | relational_expression LESS_EQUAL shift_expression 
                     { 
                        if(TypeCheck($1->Location,$3->Location))
                        {
                            $$ = new Expression();
                            $$->Type="bool";
                            $$->TrueList= MakeList(QuadList.InstructionList.size());
                            $$->FalseList= MakeList(QuadList.InstructionList.size()+1);
                            QuadArray::Emit("<=","",$1->Location->Name,$3->Location->Name);
                            QuadArray::Emit("goto","_");
                        }
                        else
                        {
                            yyerror("Type mismatch");
                        }
                    }
                     | relational_expression GREATER_EQUAL shift_expression 
                     { 
                        if(TypeCheck($1->Location,$3->Location))
                        {
                            $$ = new Expression();
                            $$->Type="bool";
                            $$->TrueList= MakeList(QuadList.InstructionList.size());
                            $$->FalseList= MakeList(QuadList.InstructionList.size()+1);
                            QuadArray::Emit(">=","",$1->Location->Name,$3->Location->Name);
                            QuadArray::Emit("goto","_");
                        }
                        else
                        {
                            yyerror("Type mismatch");
                        }
                    }
                     ;

/*_______ EQUALITY EXPRESSION ________*/

equality_expression : relational_expression 
                    { 
                        $$ = $1;
                    }
                   | equality_expression EQUAL relational_expression 
                   { 
                        if(TypeCheck($1->Location,$3->Location))
                        {
                            $$ = new Expression();
                            btoi($1);
                            btoi($3);
                            $$->Type="bool";
                            $$->TrueList= MakeList(QuadList.InstructionList.size());
                            $$->FalseList= MakeList(QuadList.InstructionList.size()+1);
                            QuadArray::Emit("==","",$1->Location->Name,$3->Location->Name);
                            QuadArray::Emit("goto","_");
                        }
                        else
                        {
                            yyerror("Type mismatch");
                        }
                    }
                   | equality_expression NOT_EQUAL relational_expression 
                   {
                        if(TypeCheck($1->Location,$3->Location))
                        {
                            $$ = new Expression();
                            btoi($1);
                            btoi($3);
                            $$->Type="bool";
                            $$->TrueList= MakeList(QuadList.InstructionList.size());
                            $$->FalseList= MakeList(QuadList.InstructionList.size()+1);
                            QuadArray::Emit("!=","",$1->Location->Name,$3->Location->Name);
                            QuadArray::Emit("goto","_");
                        }
                        else
                        {
                            yyerror("Type mismatch");
                        }
                     }
                   ;

/*_______ AND EXPRESSION ________*/

and_expression : equality_expression 
                { 
                    $$ = $1;
                }
               | and_expression BITWISE_AND equality_expression
                { 
                    if(TypeCheck($1->Location,$3->Location))
                    {
                        $$ = new Expression();
                        btoi($1);
                        btoi($3);
                        $$->Type="notbool";
                        $$->Location = SymbolTable::GenTemp(new SType("int"));
                        QuadArray::Emit("&",$$->Location->Name,$1->Location->Name,$3->Location->Name);
                    }
                    else
                    {
                        yyerror("Type mismatch");
                    }
                }
               ;

/*_______ EXCLUSIVE OR EXPRESSION ________*/

exclusive_or_expression : and_expression 
                        { 
                            $$ = $1;
                        }
                        | exclusive_or_expression BITWISE_XOR and_expression 
                        {
                            if(TypeCheck($1->Location,$3->Location))
                            {
                                $$ = new Expression();
                                btoi($1);
                                btoi($3);
                                $$->Type="notbool";
                                $$->Location = SymbolTable::GenTemp(new SType("int"));
                                QuadArray::Emit("^",$$->Location->Name,$1->Location->Name,$3->Location->Name);
                            }
                            else
                            {
                                yyerror("Type mismatch");
                            }
                        }
                        ;

/*_______ INCLUSIVE OR EXPRESSION ________*/

inclusive_or_expression : exclusive_or_expression 
                        { 
                            $$ = $1;
                        }
                        | inclusive_or_expression BITWISE_OR exclusive_or_expression 
                        { 
                            if(TypeCheck($1->Location,$3->Location))
                            {
                                $$ = new Expression();
                                btoi($1);
                                btoi($3);
                                $$->Type="notbool";
                                $$->Location = SymbolTable::GenTemp(new SType("int"));
                                QuadArray::Emit("|",$$->Location->Name,$1->Location->Name,$3->Location->Name);
                            }
                            else
                            {
                                yyerror("Type mismatch");
                            }
                        }
                        ;

/*_______ LOGICAL AND EXPRESSION ________*/

logical_and_expression : inclusive_or_expression 
                        { 
                            $$ = $1;
                        }
                       | logical_and_expression AND inclusive_or_expression 
                        { 
                            $$ = new Expression();
                            itob($1);
                            itob($3);
                            $$->Type = "bool";
                            BackPatch($1->TrueList,QuadList.InstructionList.size());
                            $$->TrueList = $3->TrueList;
                            $$->FalseList = Merge($1->FalseList,$3->FalseList);
                        }
                       ;

/*_______ LOGICAL OR EXPRESSION ________*/

logical_or_expression : logical_and_expression 
                        { 
                            $$ = $1;
                        }
                      | logical_or_expression OR logical_and_expression 
                        {
                            $$ = new Expression();
                            itob($1);
                            itob($3);
                            $$->Type = "bool";
                            BackPatch($1->FalseList,QuadList.InstructionList.size());
                            $$->FalseList = $3->FalseList;
                            $$->TrueList = Merge($1->TrueList,$3->TrueList);
                        }
                      ;

/*_______ CONDITIONAL EXPRESSION ________*/

conditional_expression : logical_or_expression 
                        {
                            $$ = $1;
                        }
                      | logical_or_expression newstatement QUESTION countinst expression newstatement COLON countinst conditional_expression 
                        /*newstatement,countinst are added for augmentation*/
                        { 
                            $$ = new Expression();
                            $$->Location = SymbolTable::GenTemp($5->Location->Type);
                            $$->Location->Update($5->Location->Type);
                            QuadArray::Emit("=",$$->Location->Name,$9->Location->Name);
                            list<int> ll = MakeList(QuadList.InstructionList.size());
                            QuadArray::Emit("goto","_");
                            BackPatch($6->NextList,QuadList.InstructionList.size());
                            QuadArray::Emit("=",$$->Location->Name,$5->Location->Name);
                            list<int> llp = MakeList(QuadList.InstructionList.size());
                            ll = Merge(ll,llp);
                            QuadArray::Emit("goto","_");
                            BackPatch($2->NextList,QuadList.InstructionList.size());
                            itob($1);
                            BackPatch($1->TrueList,$4);
                            BackPatch($1->FalseList,$8);
                            BackPatch(ll,QuadList.InstructionList.size());
                        }
                      ;
/*returns the no of quads are there in the quad array */
countinst: 
            {
                $$ = QuadList.InstructionList.size();
            }
            ;
/*add a goto line to TAC,with empty label */
newstatement:
            {
                $$ = new Statement();
                $$->NextList = MakeList(QuadList.InstructionList.size());
                QuadArray::Emit("goto","_");
            }

/*_______ ASSIGNMENT EXPRESSION ________*/

assignment_expression : conditional_expression 
                    {
                        $$ = $1;

                    }
                     | unary_expression ASSIGN assignment_expression 
                    { 
                        if($1->A_Type=="arr")
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Type->Type);
                            QuadArray::Emit("[]=",$1->Array->Name,$1->Location->Name,$3->Location->Name);
                        }
                        else if($1->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",$1->Array->Name,$3->Location->Name);
                        }
                        else
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Array->Type->Type);
                            QuadArray::Emit("=",$1->Array->Name,$3->Location->Name);
                        }
                        $$ = $3;

                    }
                     | unary_expression MUL_EQUAL assignment_expression 
                    { 
                        if($1->A_Type=="arr")
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Type->Type);
                            QuadArray::Emit("[]=",$1->Array->Name,$1->Location->Name,$3->Location->Name);
                        }
                        else if($1->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",$1->Array->Name,$3->Location->Name);
                        }
                        else
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Array->Type->Type);
                            QuadArray::Emit("=",$1->Array->Name,$3->Location->Name);
                        }
                        $$ = $3;

                    }
                     | unary_expression DIV_EQUAL assignment_expression 
                    {
                        if($1->A_Type=="arr")
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Type->Type);
                            QuadArray::Emit("[]=",$1->Array->Name,$1->Location->Name,$3->Location->Name);
                        }
                        else if($1->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",$1->Array->Name,$3->Location->Name);
                        }
                        else
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Array->Type->Type);
                            QuadArray::Emit("=",$1->Array->Name,$3->Location->Name);
                        }
                        $$ = $3;

                    }
                     | unary_expression MOD_EQUAL assignment_expression 
                    { 
                        if($1->A_Type=="arr")
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Type->Type);
                            QuadArray::Emit("[]=",$1->Array->Name,$1->Location->Name,$3->Location->Name);
                        }
                        else if($1->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",$1->Array->Name,$3->Location->Name);
                        }
                        else
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Array->Type->Type);
                            QuadArray::Emit("=",$1->Array->Name,$3->Location->Name);
                        }
                        $$ = $3;

                    }
                     | unary_expression PLUS_EQUAL assignment_expression 
                    {
                        if($1->A_Type=="arr")
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Type->Type);
                            QuadArray::Emit("[]=",$1->Array->Name,$1->Location->Name,$3->Location->Name);
                        }
                        else if($1->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",$1->Array->Name,$3->Location->Name);
                        }
                        else
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Array->Type->Type);
                            QuadArray::Emit("=",$1->Array->Name,$3->Location->Name);
                        }
                        $$ = $3;

                    }
                     | unary_expression MINUS_EQUAL assignment_expression
                    {
                        if($1->A_Type=="arr")
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Type->Type);
                            QuadArray::Emit("[]=",$1->Array->Name,$1->Location->Name,$3->Location->Name);
                        }
                        else if($1->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",$1->Array->Name,$3->Location->Name);
                        }
                        else
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Array->Type->Type);
                            QuadArray::Emit("=",$1->Array->Name,$3->Location->Name);
                        }
                        $$ = $3;

                    }                
                     | unary_expression SHIFT_LEFT_EQUAL assignment_expression
                    {
                        if($1->A_Type=="arr")
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Type->Type);
                            QuadArray::Emit("[]=",$1->Array->Name,$1->Location->Name,$3->Location->Name);
                        }
                        else if($1->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",$1->Array->Name,$3->Location->Name);
                        }
                        else
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Array->Type->Type);
                            QuadArray::Emit("=",$1->Array->Name,$3->Location->Name);
                        }
                        $$ = $3;

                    }                     
                    | unary_expression SHIFT_RIGHT_EQUAL assignment_expression
                    {
                        if($1->A_Type=="arr")
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Type->Type);
                            QuadArray::Emit("[]=",$1->Array->Name,$1->Location->Name,$3->Location->Name);
                        }
                        else if($1->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",$1->Array->Name,$3->Location->Name);
                        }
                        else
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Array->Type->Type);
                            QuadArray::Emit("=",$1->Array->Name,$3->Location->Name);
                        }
                        $$ = $3;

                    }

                     | unary_expression BITWISE_AND_EQUAL assignment_expression
                    {
                        if($1->A_Type=="arr")
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Type->Type);
                            QuadArray::Emit("[]=",$1->Array->Name,$1->Location->Name,$3->Location->Name);
                        }
                        else if($1->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",$1->Array->Name,$3->Location->Name);
                        }
                        else
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Array->Type->Type);
                            QuadArray::Emit("=",$1->Array->Name,$3->Location->Name);
                        }
                        $$ = $3;

                    }

                     | unary_expression BITWISE_XOR_EQUAL assignment_expression
                    {
                        if($1->A_Type=="arr")
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Type->Type);
                            QuadArray::Emit("[]=",$1->Array->Name,$1->Location->Name,$3->Location->Name);
                        }
                        else if($1->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",$1->Array->Name,$3->Location->Name);
                        }
                        else
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Array->Type->Type);
                            QuadArray::Emit("=",$1->Array->Name,$3->Location->Name);
                        }
                        $$ = $3;

                    }

                     | unary_expression BITWISE_OR_EQUAL assignment_expression
                    {
                        if($1->A_Type=="arr")
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Type->Type);
                            QuadArray::Emit("[]=",$1->Array->Name,$1->Location->Name,$3->Location->Name);
                        }
                        else if($1->A_Type=="ptr")
                        {
                            QuadArray::Emit("*=",$1->Array->Name,$3->Location->Name);
                        }
                        else
                        {
                            $3->Location = TypeConvertor($3->Location,$1->Array->Type->Type);
                            QuadArray::Emit("=",$1->Array->Name,$3->Location->Name);
                        }
                        $$ = $3;

                    }                   
                    ;


/*_______ EXPRESSION ________*/

expression : assignment_expression 
            {
                $$ = $1;

            }
           | expression COMMA assignment_expression 
            { 

            }
           ;
/*_______ CONSTANT EXPRESSION ________*/

constant_expression : conditional_expression 
                    {

                    }
                    ;


/*__ 2. DECLARATIONS _______________________________________*/


/*_______ DECLARATION ________*/

declaration : declaration_specifiers init_declarator_list_opt SEMICOLON 
            { 

            }
            ;

/*_______ DECLARATION SPECIFIER ________*/

declaration_specifiers : storage_class_specifier 
                        {

                        }
                        | type_specifier 
                        {

                        }       
                        | type_qualifier 
                        {

                        }
                        | function_specifier 
                        {

                        }
                        | storage_class_specifier declaration_specifiers 
                        {

                        }
                        | type_specifier declaration_specifiers 
                        {

                        }
                        | type_qualifier declaration_specifiers 
                        {

                        }
                        | function_specifier declaration_specifiers 
                        {

                        }
                        ;

/*_______ INIT DECLARATION LIST ________*/

init_declarator_list_opt:  
                        {

                        }
                        |  init_declarator_list 
                        {

                        }
                        ;

init_declarator_list : init_declarator 
                        {

                        }
                        | init_declarator_list COMMA init_declarator 
                        {

                        }
                        ;

/*_______ INIT DECLARATOR ________*/

init_declarator : declarator 
                {
                    $$ = $1;

                }
                | declarator ASSIGN initializer 
                {
                    if($3->InitialValue!="")
                    {
                        $1->InitialValue = $3->InitialValue;
                    }
                    QuadArray::Emit("=",$1->Name,$3->Name);

                }
                ;

/*_______ STORAGE CLASS SPECIFIER ________*/

storage_class_specifier : EXTERN 
                        {
                            
                        } 
                        | AUTO 
                        {
                            
                        } 
                        | REGISTER 
                        {
                            
                        } 
                        | STATIC 
                        {
                            
                        }
                        ;

/*_______ TYPE SPECIFIER ________*/

type_specifier : VOID 
                {
                    VarType="void";

                }
                | CHAR 
                {
                    VarType="char";

                }
                | SHORT 
                {
                    VarType="short";

                }
                | INT 
                {
                    VarType="int";

                }
                | LONG 
                {
                    VarType="long";

                }
                | FLOAT 
                {
                    VarType="float";

                }
                | SIGNED 
                {
                    VarType="signed";

                }
                | UNSIGNED 
                {
                    VarType="unsigned";

                }
                | BOOL 
                {
                    VarType="bool";

                }
                | COMPLEX 
                {
                    VarType="complex";

                }
                | IMAGINARY 
                {
                    VarType="imaginary";

                }
                | DOUBLE 
                {
                    VarType="double";

                }
                ;

/*_______ SPECIFIER QUALIFIER LIST ________*/

specifier_qualifier_list : type_specifier specifier_qualifier_list 
                        {

                        }
                        | type_qualifier specifier_qualifier_list  
                        {

                        }
                        | type_specifier 
                        {

                        }
                        | type_qualifier 
                        {

                        }
                        ;

/*_______ TYPE QUALIFIER ________*/

type_qualifier : CONST 
                {

                }
                | RESTRICT 
                {

                }
                | VOLATILE 
                {

                }
                ;

/*_______ FUNCTION SPECIFIER ________*/

function_specifier : INLINE 
                    {

                    }
                    ;

/*_______ DECLARATOR ________*/

declarator : pointer direct_declarator 
            {
                SType* S = $1;
                while(S->ArrType!=NULL)
                {
                    S = S->ArrType;
                } 
                S->ArrType = $2->Type;
                $$ = $2->Update($1);

            }
            | direct_declarator
            {

            }
            ;

/*_______ DIRECT DECLARATOR ________*/

direct_declarator : IDENTIFIER 
                    {
                        Symbol* NewS = new Symbol(Globe);
                        CurrentST->Table.push_back(*NewS);
                        $$ = &(CurrentST->Table.back());
                        $$->Update(new SType(VarType));
                        RecentSymbol = $$;

                    }
                    | ROUND_BRACKET_OPEN declarator ROUND_BRACKET_CLOSE 
                    {
                        $$ = $2;

                    }
                    | direct_declarator SQUARE_BRACKET_OPEN  type_qualifier_list assignment_expression_opt SQUARE_BRACKET_CLOSE 
                    {

                    }
                    | direct_declarator SQUARE_BRACKET_OPEN assignment_expression SQUARE_BRACKET_CLOSE 
                    {
                        SType* S = $1->Type;
                        SType* Prev = NULL;
                        while(S->Type=="arr")
                        {
                            Prev = S;
                            S = S->ArrType;
                        }
                        int Temp = atoi($3->Location->InitialValue.c_str());
                        if(Temp<=0)
                        {
                            yyerror("Array Size Cant be negative");
                        }
                        if(Prev==NULL)
                        {
                            SType* Temp2 = new SType("arr",Temp,$1->Type);
                            $$ = $1->Update(Temp2);
                        }
                        else
                        {
                            SType* Temp2 = new SType("arr",Temp,S);
                            Prev->ArrType = Temp2;
                            $$ = $1->Update($1->Type);
                        }

                    }
                    | direct_declarator SQUARE_BRACKET_OPEN SQUARE_BRACKET_CLOSE 
                    {
                        SType* S = $1->Type;
                        SType* Prev = NULL;
                        while(S->Type=="arr")
                        {
                            Prev = S;
                            S = S->ArrType;
                        }
                        if(Prev==NULL)
                        {
                            SType* Temp = new SType("arr",0,$1->Type);
                            $$ = $1->Update(Temp);
                        }
                        else
                        {
                            SType* Temp = new SType("arr",0,S);
                            Prev->ArrType = Temp;
                            $$ = $1->Update($1->Type);
                        }
                    }
                    | direct_declarator SQUARE_BRACKET_OPEN STATIC type_qualifier_list_opt assignment_expression SQUARE_BRACKET_CLOSE 
                    {

                    }
                    | direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list STATIC assignment_expression SQUARE_BRACKET_CLOSE 
                    {

                    }
                    | direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list MUL SQUARE_BRACKET_CLOSE 
                    {

                    }
                    | direct_declarator ROUND_BRACKET_OPEN switch_table parameter_type_list ROUND_BRACKET_CLOSE 
                    /*switch_table added for augmentation */
                    {
                        CurrentST->Name = $1->Name;
                        if($1->Type->Type!="void")
                        {
                            Symbol* Temp = CurrentST->LookUp("return");
                            Temp->Update($1->Type);
                        }
                        $1->NestedTable = CurrentST;
                        CurrentST->PtrToParent = GlobalST;
                        CurrentST = GlobalST;
                        RecentSymbol = $$;
                    }
                    | direct_declarator ROUND_BRACKET_OPEN switch_table ROUND_BRACKET_CLOSE 
                    {
                        CurrentST->Name = $1->Name;
                        if($1->Type->Type!="void")
                        {
                            Symbol* Temp = CurrentST->LookUp("return");
                            Temp->Update($1->Type);
                        }
                        $1->NestedTable = CurrentST;
                        CurrentST->PtrToParent = GlobalST;
                        CurrentST = GlobalST;
                        RecentSymbol = $$;
                    }
                    | direct_declarator ROUND_BRACKET_OPEN identifier_list ROUND_BRACKET_CLOSE 
                    {

                    }
                    ;
/*switch_tabel used to change the curent symboltable pointer to new symboltable or another already existing symbol table*/
switch_table:
            {
                if(RecentSymbol->NestedTable!=NULL)
                {
                    CurrentST = RecentSymbol->NestedTable;
                    QuadArray::Emit("label",CurrentST->Name);
                }
                else
                {
                    CurrentST = new SymbolTable("");
                }
            }
            ;

type_qualifier_list_opt : {

                        }  
                        | type_qualifier_list 
                        {

                        }
                        ;

assignment_expression_opt :  {

                            }
                          | assignment_expression 
                            {

                            }
                            ;

/*_______ POINTER ________*/

pointer : MUL type_qualifier_list_opt 
        {
            $$ = new SType("ptr");

        }
        | MUL type_qualifier_list_opt pointer 
        {
            $$ = new SType("ptr",1,$3);

        }
        ;

/*_______ TYPE QUALIFIER LIST ________*/

type_qualifier_list : type_qualifier 
                    {

                    }
                    | type_qualifier_list type_qualifier 
                    {

                    }
                    ;

/*_______ PARAMETER TYPE LIST ________*/

parameter_type_list : parameter_list 
                    {

                    }
                    | parameter_list COMMA ELLIPSIS {

                    }
                    ;

/*_______ PARAMETER LIST ________*/

parameter_list : parameter_declaration 
                {

                }
               | parameter_list COMMA parameter_declaration 
               {

                }
               ;

/*_______ PARAMETER DECLARATION ________*/

parameter_declaration : declaration_specifiers declarator 
                    {

                    }
                      | declaration_specifiers 
                    {

                    }
                      ;

/*_______ IDENTIFIER LIST ________*/

identifier_list: IDENTIFIER 
                {

                }
               | identifier_list COMMA IDENTIFIER 
               {

                }
               ;

/*_______ TYPE NAME ________*/

type_name : specifier_qualifier_list 
            {

            }
            ;

/*_______ INITIALIZER ________*/

initializer : assignment_expression 
            {
                $$ = $1->Location;

            }
            | CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE 
            {

            }
            | CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE 
            {

            }
            ;

/*_______ INITIALIZER LIST ________*/

initializer_list : designation_opt initializer 
                {

                }
                 | initializer_list COMMA designation_opt initializer 
                 {

                }
                 ;

designation_opt : designation  
                {

                }
                | 
                {

                }
                ;

/*_______ DESIGNATION ________*/

designation : designator_list ASSIGN 
            {

            }
            ;

/*_______ DESIGNATOR LIST ________*/

designator_list : designator 
                {

                }
                | designator_list designator 
                {

                }
                ;

/*_______ DESIGNATOR ________*/

designator : SQUARE_BRACKET_OPEN constant_expression SQUARE_BRACKET_CLOSE  
            {

            }
             | DOT IDENTIFIER 
             {

            }
             ;

/*__ 2. STATEMENTS _______________________________________*/


/*_______ STATEMENT ________*/

statement : labeled_statement 
            {

            }
            | compound_statement 
            {
                $$ = $1;
            }
            | expression_statement 
            {
                $$ = new Statement();
                $$->NextList = $1->NextList;
            }
            | selection_statement 
            {
               $$ = $1;
            }
            | iteration_statement 
            {
                $$ = $1;
            }
            | jump_statement 
            {
                $$ = $1;
            }
            ;

loop_block:labeled_statement 
            {

            }
            | expression_statement 
            {
                $$ = new Statement();
                $$->NextList = $1->NextList;
            }
            | selection_statement 
            {
               $$ = $1;
            }
            | iteration_statement 
            {
                $$ = $1;
            }
            | jump_statement 
            {
                $$ = $1;

            }
            ;


/*_______ LABELED STATEMENT ________*/

labeled_statement : IDENTIFIER COLON statement  
                    {

                    }
                    | CASE constant_expression COLON statement  
                    {

                    }
                    | DEFAULT COLON statement 
                    {

                    }
                    ;

/*_______ COMPOUND STATEMENT ________*/

compound_statement : CURLY_BRACKET_OPEN createST switch_table block_item_list_opt CURLY_BRACKET_CLOSE 
                    /*createST,switch_table are added for augmentation*/
                    {
                        $$ = $4;
                        CurrentST = CurrentST->PtrToParent;
                    }
                    ;
/*createST is New Symbol used to create new symbol table  */
createST:
        {
            string New_ST = CurrentST->Name+"_"+BlockType+"_"+to_string(SymbolTableCount++);
            Symbol* TempSym = CurrentST->LookUp(New_ST);
            TempSym->NestedTable = new SymbolTable(New_ST);
            TempSym->Name = New_ST;
            TempSym->NestedTable->PtrToParent = CurrentST;
            TempSym->Type = new SType("block");
            RecentSymbol = TempSym;
        }
        ;

block_item_list_opt :   
                    {
                       $$ = new Statement();
                    } 
                    | block_item_list 
                    {
                        $$ = $1;
                    }
                    ;

/*_______ BLOCK ITEM LIST ________*/

block_item_list : block_item  
                {
                    $$ = $1;
                }
                | block_item_list countinst block_item 
                /*countinst added for augmentation */
                {
                    $$ = $3;
                    BackPatch($1->NextList,$2);
                }
                ;

/*_______ BLOCK ITEM ________*/

block_item : declaration  
            {
                $$ = new Statement();
            }
            | statement 
            {
                $$ = $1;
            }
            ;

/*_______ EXPRESSION STATEMENT ________*/

expression_statement : expression_opt SEMICOLON 
                    {
                        $$ = $1;
                    }
                    ;

expression_opt :   
                {
                    $$ = new Expression();
                }
                | expression  
                {
                    $$ = $1;
                }
                ;

/*_______ SELECTION STATEMENT ________*/

selection_statement : IF ROUND_BRACKET_OPEN expression newstatement ROUND_BRACKET_CLOSE countinst statement newstatement %prec THEN
                    /*newstatement ,countinst are added for augmnentation*/
                    {
                        BackPatch($4->NextList,QuadList.InstructionList.size());
                        itob($3);
                        $$ = new Statement();
                        BackPatch($3->TrueList,$6);
                        list<int> ll = Merge($3->FalseList,$7->NextList);
                        $$->NextList = Merge(ll,$8->NextList);
                    }
                    | IF ROUND_BRACKET_OPEN expression newstatement ROUND_BRACKET_CLOSE countinst statement newstatement ELSE countinst statement 
                    {
                        BackPatch($4->NextList,QuadList.InstructionList.size());
                        itob($3);
                        $$ = new Statement();
                        BackPatch($3->TrueList,$6);
                        BackPatch($3->FalseList,$10);
                        list<int> ll = Merge($7->NextList,$8->NextList);
                        $$->NextList = Merge(ll,$11->NextList);
                    }
                    | SWITCH ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement 
                    {

                    }
                    ;

/*_______ ITERATION STATEMENT ________*/

iteration_statement : WHILE whilestart ROUND_BRACKET_OPEN createST switch_table countinst expression ROUND_BRACKET_CLOSE countinst loop_block 
                    /* whilestart   sets block type  ,createST,switch_table,countinst are added for augementation */
                    {
                        $$ = new Statement();
                        itob($7);
                        BackPatch($10->NextList,$6);
                        BackPatch($7->TrueList,$9);
                        $$->NextList = $7->FalseList;
                        QuadArray::Emit("goto",itos($6));
                        BlockType="";
                        CurrentST = CurrentST->PtrToParent;
                    }
                    | WHILE whilestart ROUND_BRACKET_OPEN createST switch_table countinst expression ROUND_BRACKET_CLOSE countinst CURLY_BRACKET_OPEN  block_item_list_opt CURLY_BRACKET_CLOSE  
                    {
                        $$ = new Statement();
                        itob($7);
                        BackPatch($11->NextList,$6);
                        BackPatch($7->TrueList,$9);
                        $$->NextList = $7->FalseList;
                        QuadArray::Emit("goto",itos($6));
                        BlockType="";
                        CurrentST = CurrentST->PtrToParent;
                    }
                    | DO dostart createST switch_table countinst loop_block WHILE ROUND_BRACKET_OPEN countinst expression ROUND_BRACKET_CLOSE SEMICOLON 
                    /*dostart sets blocktype ,createST ,switch_table,countinst,newstatement,are added for augmentation*/
                    {
                        $$ = new Statement();
                        itob($10);
                        BackPatch($10->TrueList,$5);
                        BackPatch($6->NextList,$9);
                        $$->NextList = $10->FalseList;
                        BlockType="";
                        CurrentST = CurrentST->PtrToParent;
                    }
                    | DO dostart CURLY_BRACKET_OPEN createST switch_table countinst block_item_list_opt CURLY_BRACKET_CLOSE WHILE ROUND_BRACKET_OPEN countinst expression ROUND_BRACKET_CLOSE SEMICOLON 
                    {
                        $$ = new Statement();
                        itob($12);
                        BackPatch($12->TrueList,$6);
                        BackPatch($7->NextList,$11);
                        $$->NextList = $12->FalseList;
                        BlockType="";
                        CurrentST = CurrentST->PtrToParent;
                    }
                    | FOR forstart ROUND_BRACKET_OPEN createST switch_table expression_opt SEMICOLON countinst expression_opt SEMICOLON countinst expression_opt newstatement ROUND_BRACKET_CLOSE countinst loop_block
                    /*forstart sets blocktype ,createST ,switch_table,countinst,newstatement,are added for augmentation*/                     
                    {
                        $$ = new Statement();
                        itob($9);
                        BackPatch($9->TrueList,$15);
                        BackPatch($13->NextList,$8);
                        BackPatch($16->NextList,$11);
                        QuadArray::Emit("goto",itos($11));
                        $$->NextList = $9->FalseList;
                        BlockType = "";
                        CurrentST = CurrentST->PtrToParent;
                    }
                    | FOR forstart ROUND_BRACKET_OPEN createST switch_table expression_opt SEMICOLON countinst expression_opt SEMICOLON countinst expression_opt newstatement ROUND_BRACKET_CLOSE countinst CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE  
                    {
                        $$ = new Statement();
                        itob($9);
                        BackPatch($9->TrueList,$15);
                        BackPatch($13->NextList,$8);
                        BackPatch($17->NextList,$11);
                        QuadArray::Emit("goto",itos($11));
                        $$->NextList = $9->FalseList;
                        BlockType = "";
                        CurrentST = CurrentST->PtrToParent;
                    }
                    | FOR forstart ROUND_BRACKET_OPEN createST switch_table declaration countinst expression_opt SEMICOLON countinst expression_opt newstatement ROUND_BRACKET_CLOSE countinst loop_block 
                    {
                        $$ = new Statement();
                        itob($8);
                        BackPatch($8->TrueList,$14);
                        BackPatch($12->NextList,$7);
                        BackPatch($15->NextList,$10);
                        QuadArray::Emit("goto",itos($10));
                        $$->NextList = $8->FalseList;
                        BlockType = "";
                        CurrentST = CurrentST->PtrToParent;
                    }
                    | FOR forstart ROUND_BRACKET_OPEN createST switch_table declaration countinst expression_opt SEMICOLON countinst expression_opt newstatement ROUND_BRACKET_CLOSE countinst CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE  
                    {
                        $$ = new Statement();
                        itob($8);
                        BackPatch($8->TrueList,$14);
                        BackPatch($12->NextList,$7);
                        BackPatch($16->NextList,$10);
                        QuadArray::Emit("goto",itos($10));
                        $$->NextList = $8->FalseList;
                        BlockType = "";
                        CurrentST = CurrentST->PtrToParent;
                    }
                    ;
/*forstart :creates the "for" label*/
forstart:
        {
            BlockType="for_loop";
        } 
        ;
/*forstart :creates the "while_loop" label*/
whilestart:
         {
            BlockType="while_loop";
        }
        ;
/*forstart :creates the "do_While_loop" label*/
dostart:
         {
            BlockType="do_while_loop";
        }
        ;

/*_______ JUMP STATEMENT ________*/

jump_statement : GOTO IDENTIFIER SEMICOLON   
                {

                }
                | CONTINUE SEMICOLON  
                {
                    $$ = new Statement();
                }
                | BREAK SEMICOLON 
                {
                    $$ = new Statement();
                }
               | RETURN expression_opt SEMICOLON 
                {
                    $$ = new Statement();
                    QuadArray::Emit("return",$2->Location->Name);
                }
               ;



/*__ 2. EXTERNAL DEFINITIONS _______________________________________*/

/*_______ TRANSLATION UNIT ________*/

translation_unit : external_declaration 
                {

                }
                 | translation_unit external_declaration 
                {

                }
                 ;

/*_______ EXTERNAL DECLARATION ________*/

external_declaration : function_definition 
                    {

                    }
                     | declaration 
                     {

                    }
                     ;

/*_______ FUNCTION DEFINITION ________*/

function_definition : declaration_specifiers declarator declaration_list_opt CURLY_BRACKET_OPEN switch_table block_item_list_opt CURLY_BRACKET_CLOSE 
                    {
                        CurrentST->PtrToParent = GlobalST;
                        SymbolTableCount=0;
                        CurrentST = GlobalST;
                    }
                    ;

declaration_list_opt :  
                    {
                        
                    }
                     | declaration_list 
                    {

                    }
                     ;

/*_______ DECLARATION LIST ________*/

declaration_list : declaration 
                {

                }
                 | declaration_list declaration 
                {

                }
                 ;



%%
void yyerror(string ERRORS) {
    cout << "Error :" << ERRORS << '\n';
}


