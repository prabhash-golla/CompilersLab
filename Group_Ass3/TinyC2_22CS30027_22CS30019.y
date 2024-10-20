%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "TinyC3_22CS30027_22CS10019_translator.h"
    // #define YYDEBUG 1 //For Debugging 
    // int yydebug=1;
    
    /*
        Group :- TinyC-67
        Golla Meghanandh Manvith Prabhash :- 22CS30027
        Darapu Adhithya  :- 22CS30019
    */
    extern int yylineno;
    int yylex();
    extern string Globe;
    void yyerror(char *ERRORS);
   
%}

%union {
    int INTVAL;
    float FLOATVAL;
    char* CHARVAL;
    char UnaryOper;
    ArrayType* Array;
    int Parameter;
    Symbol* SymbolPointer;
    Statement* Stateme;
    Stype* Type;
    Expression* Express;
}

/*_______ COMMENTS ________*/

%token SINGLE_COMMENT MULTILINE_COMMENT

/*_______ KEYWORDS ________*/

%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN REGISTER FLOAT FOR GOTO IF INLINE INT LONG RESTRICT RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION UNSIGNED VOID VOLATILE WHILE BOOL COMPLEX IMAGINARY

/*_______ PUNCTUATORS AND OPERATORS ________*/

%token SQUARE_BRACKET_OPEN SQUARE_BRACKET_CLOSE ROUND_BRACKET_OPEN ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN CURLY_BRACKET_CLOSE DOT IMPLIES INCREMENT DECREMENT BITWISE_AND MUL PLUS MINUS BITWISE_NOT NOT DIV MOD LEFT_SHIFT RIGHT_SHIFT LESS_THAN GREATER_THAN LESS_EQUAL GREATER_EQUAL EQUAL NOT_EQUAL BITWISE_XOR BITWISE_OR AND OR QUESTION COLON SEMICOLON ELLIPSIS ASSIGN MUL_EQUAL DIV_EQUAL MOD_EQUAL PLUS_EQUAL MINUS_EQUAL SHIFT_LEFT_EQUAL SHIFT_RIGHT_EQUAL BITWISE_AND_EQUAL BITWISE_XOR_EQUAL BITWISE_OR_EQUAL COMMA HASH

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

%type<SymbolPointer> declaration init_declarator direct_declarator initializer

%type<Type> pointer

%type<Stateme> statement iteration_statement jump_statement selection_statement labeled_statement compound_statement expression_statement block_item block_item_list block_item_list_opt

%type<exp> additive_expression  and_expression assignment_expression assignment_expression_opt   conditional_expression constant constant_expression  declaration_list declaration_list_opt 
declaration_specifiers declarator designator designator_list designation designation_opt  exclusive_or_expression expression expression_opt external_declaration function_definition function_specifier identifier_list identifier_list_opt inclusive_or_expression  
initializer_list  init_declarator_list  logical_and_expression logical_or_expression multiplicative_expression parameter_declaration parameter_list parameter_type_list primary_expression relational_expression
 specifier_qualifier_list shift_expression storage_class_specifier 
%type<exp> type_name type_qualifier type_qualifier_list type_qualifier_list_opt type_specifier equality_expression    translation_unit init_declarator_list_opt pointer_opt

%start start_symbol

%%


/*__ 1. EXPRESSIONS _______________________________________*/


/*_______ PRIMARY EXPRESSIONS ________*/

constant : INTEGER 
            { 
                $$ = new Expression();
                $$->LocalST = SymbolTable::GenTemp(new Stype("int"),itos($1));
                QuadArray::Emit("=",$$->LocalST->Name,$1);
                //$$ = createNode("constant",createNode("INTEGER", NULL, NULL),NULL); 
            }
         | FLOATING_CONSTANT 
            { 
                $$ = new Expression();
                $$->LocalST = SymbolTable::GenTemp(new Stype("float"),ftos($1));
                QuadArray::Emit("=",$$->LocalST->Name,$1);
                //$$ = createNode("constant",createNode("FLOATING_CONSTANT", NULL, NULL),NULL); 
            }
         | CHARACTER_CONSTANT 
            { 
                $$ = new Expression();
                $$->LocalST = SymbolTable::GenTemp(new Stype("char"),string($1));
                QuadArray::Emit("=",$$->LocalST->Name,$1);
                //$$ = createNode("constant",createNode("CHARACTER_CONSTANT", NULL, NULL),NULL); 
            }
         ;

primary_expression : IDENTIFIER 
                    { 
                        Symbol* Temp = CurrentST->LookUp(Globe);
                        $$ = new Expression();
                        $$->LocalST = Temp;
                        $$->Type = "non_bool";
                        //$$ = createNode("primary_expression",createNode("IDENTIFIER", NULL, NULL),NULL); 
                    }
                   | constant   
                    { 
                        $$ = $1;
                        //$$ = createNode("primary_expression",$1,NULL); 
                    }
                   | STRING_LITERAL 
                    { 
                        $$ = new Expression();
                        $$->LocalST = SymbolTable::GenTemp(new Stype("ptr"),string($1));
                        // QuadArray::Emit("=",$$->LocalST->Name,$1);
                        $$->LocalST->Type->ArrType = new Stype("char");
                        //$$ = createNode("primary_expression",createNode("STRING_LITERAL", NULL, NULL),NULL); 
                    }
                   | ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE 
                    {   
                        $$ = $2;
                        //$$ = createNode("primary_expression", createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2), createNode("ROUND_BRACKET_CLOSE",NULL,NULL)); 
                    }
                   ;

/*_______ POSTFIX EXPRESSIONS ________*/

postfix_expression : primary_expression 
                    { 
                        //$$ = createNode("postfix_expression",$1,NULL); 
                    }
                   | postfix_expression SQUARE_BRACKET_OPEN expression SQUARE_BRACKET_CLOSE 
                    {
                        // $$ = createNode("postfix_expression",$1,createNode("ignore",createNode("SQUARE_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("SQUARE_BRACKET_CLOSE",NULL,NULL)))); 
                    }
                   | postfix_expression ROUND_BRACKET_OPEN argument_expression_list_opt ROUND_BRACKET_CLOSE 
                    { 
                        //$$ = createNode("postfix_expression", $1, createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ROUND_BRACKET_OPEN",NULL,NULL)))); 
                    }
                   | postfix_expression DOT IDENTIFIER 
                    { 
                        //$$ = createNode("postfix_expression", $1,createNode("ignore",createNode("DOT",NULL,NULL),createNode("IDENTIFIER", NULL, NULL))); 
                    }
                   | postfix_expression IMPLIES IDENTIFIER 
                    { 
                        //$$ = createNode("postfix_expression", $1,createNode("ignore",createNode("IMPLIES",NULL,NULL),createNode("IDENTIFIER", NULL, NULL)));
                    }
                   | postfix_expression INCREMENT 
                    {
                        // $$ = createNode("postfix_expression", $1, createNode("INCREMENT",NULL,NULL)); 
                    }
                   | postfix_expression DECREMENT 
                    { 
                        //$$ = createNode("postfix_expression", $1, createNode("DECREMENT",NULL,NULL)); 
                    }
                   | ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE 
                    {
                        // $$ = createNode("postfix_expression", createNode("ignore",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2),createNode("ROUND_BRACKET_OPEN",NULL,NULL)),createNode("ignore",createNode("ignore",createNode("CURLY_BRACKET_CLOSE",NULL,NULL),$5),createNode("CURLY_BRACKET_CLOSE",NULL,NULL))); 
                    }
                   | ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE 
                    {
                        // $$ = createNode("postfix_expression", createNode("ignore",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2),createNode("ROUND_BRACKET_OPEN",NULL,NULL)),createNode("ignore",createNode("ignore",createNode("CURLY_BRACKET_CLOSE",NULL,NULL),$5),createNode("ignore",createNode("COMMA",NULL,NULL),createNode("CURLY_BRACKET_CLOSE",NULL,NULL)))); 
                    }
                   ;

/*_______ ARGUMENT EXPRESSION LIST ________*/

argument_expression_list_opt: 
                        {
                            $$ = 0;
                            //$$ = createNode("argument_expression_list_opt",NULL, NULL);
                        }
                        | argument_expression_list 
                        {
                            $$ = $1;
                            //$$ = createNode("argument_expression_list_opt", $1, NULL);
                        }
                        ;

argument_expression_list : assignment_expression 
                        { 
                            $$ = 1;
                            QuadArray::Emit("param",$1->LocalST->Name);
                            //$$ = createNode("argument_expression_list", $1, NULL); 
                        }
                        | argument_expression_list COMMA assignment_expression 
                        { 
                            $$ = $1 + 1;
                            QuadArray::Emit("param",$3->LocalST->Name);
                            //$$ = createNode("argument_expression_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),$3)); 
                        }
                        ;

/*_______ URNARY EXPRESSION ________*/

unary_expression : postfix_expression 
                    {
                        // $$ = createNode("unary_expression", $1, NULL); 
                    }
                 | INCREMENT unary_expression 
                    { 
                        //$$ = createNode("unary_expression", createNode("INCREMENT",NULL,NULL), $2); 
                    }
                 | DECREMENT unary_expression 
                    { 
                        //$$ = createNode("unary_expression", createNode("DECREMENT",NULL,NULL), $2); 
                    }
                 | unary_operator cast_expression 
                    { 
                        //$$ = createNode("unary_expression", $1, $2); 
                    }
                 | SIZEOF unary_expression 
                    { 
                        //$$ = createNode("unary_expression", createNode("SIZEOF",NULL,NULL), $2); 
                    }
                 | SIZEOF ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE 
                    {  
                        //$$ = createNode("unary_expression", createNode("SIZEOF",NULL,NULL), createNode("ignore",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3),createNode("ROUND_BRACKET_CLOSE",NULL,NULL))); 
                    }
                 ;

/*_______ URNARY OPERATOR ________*/

unary_operator: BITWISE_AND 
                {
                    // $$ = createNode("BITWISE_AND", NULL, NULL); 
                }
              | MUL 
                { 
                    //$$ = createNode("MUL", NULL, NULL); 
                }
              | PLUS 
                { 
                    //$$ = createNode("PLUS", NULL, NULL); 
                }
              | MINUS 
                { 
                    //$$ = createNode("MINUS", NULL, NULL); 
                }
              | BITWISE_NOT 
                { 
                    //$$ = createNode("BITWISE_NOT", NULL, NULL); 
                }
              | NOT 
                {
                    // $$ = createNode("NOT", NULL, NULL); 
                }
              ;

/*_______ CAST EXPRESSION ________*/

cast_expression : unary_expression 
                { 
                    //$$ =  createNode("cast_expression", $1, NULL); 
                }
                | ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE cast_expression 
                { 
                    //$$ =  createNode("cast_expression", createNode("ROUND_BRACKET_OPEN",NULL,NULL), createNode("ignore",$2,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$4))); 
                }
                ;

/*_______ MULTIPLICATIVE EXPRESSION ________*/

multiplicative_expression : cast_expression 
                            { 
                                //$$ =createNode("multiplicative_expression",$1,NULL);  
                            }
                         | multiplicative_expression MUL cast_expression 
                            { 
                                //$$ = createNode("multiplicative_expression",$1,createNode("ignore",createNode("MUL", NULL, NULL),$3)); 
                            }
                         | multiplicative_expression DIV cast_expression 
                            { 
                                //$$ = createNode("multiplicative_expression",$1,createNode("ignore",createNode("DIV", NULL, NULL),$3)); 
                            }
                         | multiplicative_expression MOD cast_expression 
                            { 
                                //$$ = createNode("multiplicative_expression",$1,createNode("ignore",createNode("MOD", NULL, NULL),$3)); 
                            }
                         ;

/*_______ ADDITIVE EXPRESSION ________*/

additive_expression : multiplicative_expression 
                    { 
                        //$$ =createNode("additive_expression",$1,NULL); 
                    }
                   | additive_expression PLUS multiplicative_expression 
                    {
                        //$$ = createNode("additive_expression",$1,createNode("ignore",createNode("PLUS", NULL, NULL),$3)); 
                    }
                   | additive_expression MINUS multiplicative_expression 
                    { 
                        //$$ = createNode("additive_expression",$1,createNode("ignore",createNode("MINUS", NULL, NULL),$3)); 
                    }
                   ;

/*_______ SHIFT EXPRESSION ________*/

shift_expression : additive_expression { $$ =createNode("shift_expression",$1,NULL); }
                 | shift_expression LEFT_SHIFT additive_expression { $$ = createNode("shift_expression",$1,createNode("ignore",createNode("LEFT_SHIFT", NULL, NULL),$3)); }
                 | shift_expression RIGHT_SHIFT additive_expression { $$ = createNode("shift_expression",$1,createNode("ignore",createNode("RIGHT_SHIFT", NULL, NULL),$3)); }
                 ;

/*_______ RELATIONAL EXPRESSION ________*/

relational_expression : shift_expression { $$ =createNode("relational_expression",$1,NULL); }
                     | relational_expression LESS_THAN shift_expression {$$ = createNode("relational_expression",$1,createNode("ignore",createNode("LESS_THAN", NULL, NULL),$3)); }
                     | relational_expression GREATER_THAN shift_expression { $$ = createNode("relational_expression",$1,createNode("ignore",createNode("GREATER_THAN", NULL, NULL),$3)); }
                     | relational_expression LESS_EQUAL shift_expression { $$ = createNode("relational_expression",$1,createNode("ignore",createNode("LESS_EQUAL", NULL, NULL),$3)); }
                     | relational_expression GREATER_EQUAL shift_expression { $$ = createNode("relational_expression",$1,createNode("ignore",createNode("GREATER_EQUAL", NULL, NULL),$3)); }
                     ;

/*_______ EQUALITY EXPRESSION ________*/

equality_expression : relational_expression { $$ = createNode("equality_expression",$1,NULL); }
                   | equality_expression EQUAL relational_expression { $$ = createNode("equality_expression",$1,createNode("ignore",createNode("EQUAL", NULL, NULL),$3)); }
                   | equality_expression NOT_EQUAL relational_expression { $$ = createNode("equality_expression",$1,createNode("ignore",createNode("NOT_EQUAL", NULL, NULL),$3));}
                   ;

/*_______ AND EXPRESSION ________*/

and_expression : equality_expression { $$ = createNode("and_expression",$1,NULL); }
               | and_expression BITWISE_AND equality_expression { $$ = createNode("and_expression",$1,createNode("ignore",createNode("BITWISE_AND", NULL, NULL),$3)); }
               ;

/*_______ EXCLUSIVE OR EXPRESSION ________*/

exclusive_or_expression : and_expression { $$ = createNode("exclusive_or_expression",$1,NULL); }
                        | exclusive_or_expression BITWISE_XOR and_expression {$$ = createNode("exclusive_or_expression",$1,createNode("ignore",createNode("BITWISE_XOR", NULL, NULL),$3)); }
                        ;

/*_______ INCLUSIVE OR EXPRESSION ________*/

inclusive_or_expression : exclusive_or_expression { $$ = createNode("inclusive_or_expression",$1,NULL); }
                        | inclusive_or_expression BITWISE_OR exclusive_or_expression { $$ = createNode("inclusive_or_expression",$1,createNode("ignore",createNode("BITWISE_OR", NULL, NULL),$3)); }
                        ;

/*_______ LOGICAL AND EXPRESSION ________*/

logical_and_expression : inclusive_or_expression { $$ = createNode("logical_and_expression",$1,NULL); }
                       | logical_and_expression AND inclusive_or_expression { $$ = createNode("logical_and_expression",$1,createNode("ignore",createNode("AND", NULL, NULL),$3)); }
                       ;

/*_______ LOGICAL OR EXPRESSION ________*/

logical_or_expression : logical_and_expression { $$ = createNode("logical_or_expression",$1,NULL); }
                      | logical_or_expression OR logical_and_expression { $$ = createNode("logical_or_expression",$1,createNode("ignore",createNode("OR", NULL, NULL),$3));  }
                      ;

/*_______ CONDITIONAL EXPRESSION ________*/

conditional_expression : logical_or_expression { $$ = createNode("conditional_expression",$1,NULL); }
                      | logical_or_expression QUESTION expression COLON conditional_expression { $$ = createNode("conditional_expression",$1,createNode("ignore",createNode("QUESTION", NULL, NULL),createNode("ignore",$3,createNode("ignore",createNode("COLON", NULL, NULL),$5))));}
                      ;

/*_______ ASSIGNMENT EXPRESSION ________*/

assignment_expression : conditional_expression { $$ = createNode("assignment_expression",$1,NULL); }
                     | unary_expression ASSIGN assignment_expression {  $$ = createNode("assignment_expression",$1,createNode("ignore",createNode("ASSIGN", NULL, NULL),$3)); }
                     | unary_expression MUL_EQUAL assignment_expression { $$ = createNode("assignment_expression",$1,createNode("ignore",createNode("MUL_EQUAL", NULL, NULL),$3)); }
                     | unary_expression DIV_EQUAL assignment_expression {$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("DIV_EQUAL", NULL, NULL),$3)); }
                     | unary_expression MOD_EQUAL assignment_expression { $$ = createNode("assignment_expression",$1,createNode("ignore",createNode("MOD_EQUAL", NULL, NULL),$3)); }
                     | unary_expression PLUS_EQUAL assignment_expression {$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("PLUS_EQUAL", NULL, NULL),$3)); }
                     | unary_expression MINUS_EQUAL assignment_expression{$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("MINUS_EQUAL", NULL, NULL),$3)); }                
                     | unary_expression SHIFT_LEFT_EQUAL assignment_expression{$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("SHIFT_LEFT_EQUAL", NULL, NULL),$3)); }                     | unary_expression SHIFT_RIGHT_EQUAL assignment_expression{$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("PLUS_EQUAL", NULL, NULL),$3)); }
                     | unary_expression BITWISE_AND_EQUAL assignment_expression{$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("BITWISE_AND_EQUAL", NULL, NULL),$3)); }
                     | unary_expression BITWISE_XOR_EQUAL assignment_expression{$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("BITWISE_XOR_EQUAL", NULL, NULL),$3)); }
                     | unary_expression BITWISE_OR_EQUAL assignment_expression{$$ = createNode("assignment_expression",$1,createNode("ignore",createNode("BITWISE_OR_EQUAL", NULL, NULL),$3)); }                     ;

/*_______ EXPRESSION ________*/

expression : assignment_expression { $$ = createNode("expression",$1,NULL); }
           | expression COMMA assignment_expression { $$ = createNode("expression",$1,createNode("ignore",createNode("COMMA", NULL, NULL),$3)); }
           ;
/*_______ CONSTANT EXPRESSION ________*/

constant_expression : conditional_expression { $$ = createNode("constant_expression", $1, NULL); };


/*__ 2. DECLARATIONS _______________________________________*/


/*_______ DECLARATION ________*/

declaration : declaration_specifiers init_declarator_list_opt SEMICOLON { $$ = createNode("declaration", $1, createNode("ignore",$2,createNode("SEMICOLON",NULL,NULL))); };

/*_______ DECLARATION SPECIFIER ________*/

declaration_specifiers : storage_class_specifier {$$ = createNode("declaration_specifier", $1, NULL);};
                        | type_specifier {$$ = createNode("declaration_specifier", $1, NULL);};
                        | type_qualifier {$$ = createNode("declaration_specifier", $1, NULL);};
                        | function_specifier {$$ = createNode("declaration_specifier", $1, NULL);};
                        | storage_class_specifier declaration_specifiers {$$ = createNode("declaration_specifiers", $1, $2);};
                        | type_specifier declaration_specifiers {$$ = createNode("declaration_specifiers", $1, $2);};
                        | type_qualifier declaration_specifiers {$$ = createNode("declaration_specifiers", $1, $2);};
                        | function_specifier declaration_specifiers {$$ = createNode("declaration_specifiers", $1, $2);};

/*_______ INIT DECLARATION LIST ________*/

init_declarator_list_opt:  {$$ = createNode("init_declarator_list_opt",NULL, NULL);}
                        |  init_declarator_list {$$ = createNode("init_declarator_list_opt", $1, NULL);};

init_declarator_list : init_declarator {$$ = createNode("init_declerator_list", $1, NULL);}
                        | init_declarator_list COMMA init_declarator {$$ = createNode("init_declerator_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),$3));};

/*_______ INIT DECLARATOR ________*/

init_declarator : declarator {$$ = createNode("init_declerator", $1,NULL);}
                | declarator ASSIGN initializer {$$ = createNode("init_declerator", $1, createNode("ignore",createNode("ASSIGN",NULL,NULL),$3));};

/*_______ STORAGE CLASS SPECIFIER ________*/

storage_class_specifier : EXTERN {$$ = createNode("storage_class_specifier", createNode("EXTERN",NULL,NULL), NULL);} 
                        | AUTO {$$ = createNode("storage_class_specifier", createNode("AUTO",NULL,NULL), NULL);} 
                        | REGISTER {$$ = createNode("storage_class_specifier", createNode("REGISTER",NULL,NULL), NULL);} 
                        | STATIC {$$ = createNode("storage_class_specifier",createNode("STATIC",NULL,NULL), NULL);};

/*_______ TYPE SPECIFIER ________*/

type_specifier : VOID { $$ = createNode("type_specifier", createNode("VOID",NULL,NULL), NULL); }
                | CHAR { $$ = createNode("type_specifier", createNode("CHARACTER",NULL,NULL), NULL); }
                | SHORT { $$ = createNode("type_specifier", createNode("SHORT",NULL,NULL), NULL); }
                | INT { $$ = createNode("type_specifier", createNode("INTEGER",NULL,NULL), NULL); }
                | LONG { $$ = createNode("type_specifier", createNode("LONG",NULL,NULL), NULL); }
                | FLOAT { $$ = createNode("type_specifier", createNode("FLOAT",NULL,NULL), NULL); }
                | SIGNED { $$ = createNode("type_specifier", createNode("SIGNED",NULL,NULL), NULL); }
                | UNSIGNED { $$ = createNode("type_specifier", createNode("UNSIGNED",NULL,NULL), NULL); }
                | BOOL { $$ = createNode("type_specifier", createNode("_BOOL",NULL,NULL), NULL); }
                | COMPLEX { $$ = createNode("type_specifier", createNode("_COMPLEX",NULL,NULL), NULL); }
                | IMAGINARY { $$ = createNode("type_specifier", createNode("_IMAGINARY",NULL,NULL), NULL); }
                | DOUBLE { $$ = createNode("type_specifier", createNode("DOUBLE",NULL,NULL), NULL); };

/*_______ SPECIFIER QUALIFIER LIST ________*/

specifier_qualifier_list : type_specifier specifier_qualifier_list {$$ = createNode("specifier_qualifier_list", $1, $2);}
                        | type_qualifier specifier_qualifier_list  {$$ = createNode("specifier_qualifier_list", $1, $2);}
                        | type_specifier {$$ = createNode("specifier_qualifier_list", $1, NULL);}
                        | type_qualifier {$$ = createNode("specifier_qualifier_list", $1, NULL);};

/*_______ TYPE QUALIFIER ________*/

type_qualifier : CONST {$$ = createNode("type_qualifier", createNode("CONST",NULL,NULL), NULL);}
                | RESTRICT {$$ = createNode("type_qualifier", createNode("RESTRICT",NULL,NULL), NULL);}
                | VOLATILE {$$ = createNode("type_qualifier", createNode("VOLATILE",NULL,NULL), NULL);};

/*_______ FUNCTION SPECIFIER ________*/

function_specifier : INLINE {$$ = createNode("function_specifier", createNode("INLINE",NULL,NULL), NULL);};

/*_______ DECLARATOR ________*/

declarator : pointer_opt direct_declarator {$$ = createNode("declarator", $1, $2);};

/*_______ DIRECT DECLARATOR ________*/

direct_declarator : IDENTIFIER {$$ = createNode("direct_declarator", createNode("IDENTIFIER",NULL,NULL), NULL);}
                    | ROUND_BRACKET_OPEN declarator ROUND_BRACKET_CLOSE {$$ = createNode("direct_declarator",createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$2), createNode("ROUND_BRACKET_CLOSE",NULL,NULL));}
                    | direct_declarator SQUARE_BRACKET_OPEN  type_qualifier_list_opt assignment_expression_opt SQUARE_BRACKET_CLOSE {$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",$3,createNode("ignore",$4,createNode("SQUARE_BRACKET_CLOSE",NULL,NULL))));}
                    | direct_declarator SQUARE_BRACKET_OPEN STATIC type_qualifier_list_opt assignment_expression SQUARE_BRACKET_CLOSE {$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",createNode("ignore",createNode("STATIC",NULL,NULL),$4),createNode("ignore",$5,createNode("SQUARE_BRACKET_CLOSE",NULL,NULL))));}
                    | direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list STATIC assignment_expression SQUARE_BRACKET_CLOSE {$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",createNode("ignore",$3,createNode("STATIC",NULL,NULL)),createNode("ignore",$5,createNode("SQUARE_BRACKET_CLOSE",NULL,NULL))));}
                    | direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list_opt MUL SQUARE_BRACKET_CLOSE {$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("SQUARE_BRACKET_OPEN",NULL,NULL)), createNode("ignore",createNode("ignore",$3,createNode("MUL",NULL,NULL)),createNode("SQUARE_BRACKET_CLOSE",NULL,NULL)));}
                    | direct_declarator ROUND_BRACKET_OPEN parameter_type_list ROUND_BRACKET_CLOSE {$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("ROUND_BRACKET_OPEN",NULL,NULL)), createNode("ignore",$3,createNode("ROUND_BRACKET_CLOSE",NULL,NULL)));}
                    | direct_declarator ROUND_BRACKET_OPEN identifier_list_opt ROUND_BRACKET_CLOSE {$$ = createNode("direct_declarator", createNode("ignore",$1,createNode("ROUND_BRACKET_OPEN",NULL,NULL)), createNode("ignore",$3,createNode("ROUND_BRACKET_CLOSE",NULL,NULL)));};

type_qualifier_list_opt : {$$ = createNode("type_qualifier_list_opt",NULL,NULL);}  
                        | type_qualifier_list {$$ = createNode("type_qualifier_list_opt",$1,NULL);};

assignment_expression_opt :  {$$ = createNode("assignment_expression_opt",NULL,NULL);}
                          | assignment_expression {$$ = createNode("assignment_expression_opt",$1,NULL);};

identifier_list_opt :  {$$ = createNode("identifier_list_opt",NULL,NULL);}
                    | identifier_list {$$ = createNode("identifier_list_opt",$1,NULL);};

/*_______ POINTER ________*/

pointer_opt :  {$$ = createNode("pointer_opt",NULL,NULL);}
        |pointer {$$ = createNode("pointer_opt",$1,NULL);};

pointer : MUL type_qualifier_list_opt {$$=createNode("pointer",createNode("MUL",NULL,NULL), $2);}
        | MUL type_qualifier_list_opt pointer {$$=createNode("pointer",createNode("MUL",NULL,NULL) ,createNode("ignore",$2, $3));};

/*_______ TYPE QUALIFIER LIST ________*/

type_qualifier_list : type_qualifier {$$=createNode("type_qualifier_list",$1,NULL);}
                    | type_qualifier_list type_qualifier {$$=createNode("type_qualifier_list", $1, $2);};

/*_______ PARAMETER TYPE LIST ________*/

parameter_type_list : parameter_list {$$=createNode("parameter_type_list",$1,NULL);}
                    | parameter_list COMMA ELLIPSIS {$$=createNode("parameter_type_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),createNode("ELLIPSIS",NULL,NULL)));};

/*_______ PARAMETER LIST ________*/

parameter_list : parameter_declaration {$$=createNode("parameter_list",$1,NULL);}
               | parameter_list COMMA parameter_declaration {$$=createNode("parameter_list", createNode("ignore",$1,createNode("COMMA",NULL,NULL)), $3);};

/*_______ PARAMETER DECLARATION ________*/

parameter_declaration : declaration_specifiers declarator {$$=createNode("parameter_declaration", $1, $2);}
                      | declaration_specifiers {$$=createNode("parameter_declaration",$1,NULL);};

/*_______ IDENTIFIER LIST ________*/

identifier_list: IDENTIFIER {$$=createNode("identifier_list",createNode("IDENTIFIER",NULL,NULL),NULL);}
               | identifier_list COMMA IDENTIFIER {$$=createNode("identifier_list", $1, createNode("ignore",createNode("COMMA",NULL,NULL),createNode("IDENTIFIER",NULL,NULL)));};

/*_______ TYPE NAME ________*/

type_name : specifier_qualifier_list {$$=createNode("type_name",$1,NULL);};

/*_______ INITIALIZER ________*/

initializer : assignment_expression {$$=createNode("initializer",$1,NULL);}
            | CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE {$$=createNode("initializer",createNode("ignore",createNode("CURLY_BRACKET_OPEN",NULL,NULL),$2),createNode("CURLY_BRACKET_CLOSE",NULL,NULL));}
            | CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE {$$=createNode("initializer",createNode("ignore",createNode("CURLY_BRACKET_OPEN",NULL,NULL),$2),createNode("ignore",createNode("COMMA",NULL,NULL),createNode("CURLY_BRACKET_CLOSE",NULL,NULL)));};

/*_______ INITIALIZER LIST ________*/

initializer_list : designation_opt initializer {$$=createNode("initializer_list",$1,$2);}
                 | initializer_list COMMA designation_opt initializer {$$=createNode("initializer_list",createNode("ignore",$1,createNode("COMMA",NULL,NULL)),createNode("ignore",$3,$4));};

designation_opt : designation  {$$=createNode("designation_opt",$1,NULL);}
                | {$$ = createNode("designation_opt",NULL,NULL);};

/*_______ DESIGNATION ________*/

designation : designator_list ASSIGN {$$=createNode("designation",$1,createNode("ASSIGN",NULL,NULL));};

/*_______ DESIGNATOR LIST ________*/

designator_list : designator {$$=createNode("designator_list",$1,NULL);}
                | designator_list designator {$$=createNode("designator_list",$1,$2);};

/*_______ DESIGNATOR ________*/

designator : SQUARE_BRACKET_OPEN constant_expression SQUARE_BRACKET_CLOSE  {$$=createNode("designator",createNode("ignore",createNode("SQUARE_BRACKET_OPEN",NULL,NULL),$2),createNode("SQUARE_BRACKET_CLOSE",NULL,NULL));}
             | DOT IDENTIFIER {$$=createNode("designator",createNode("DOT",NULL,NULL),createNode("IDENTIFIER",NULL,NULL));};

/*__ 2. STATEMENTS _______________________________________*/


/*_______ STATEMENT ________*/

statement : labeled_statement {$$=createNode("statement",$1,NULL);}
            | compound_statement {$$=createNode("statement",$1,NULL);}
            | expression_statement {$$=createNode("statement",$1,NULL);}
            | selection_statement {$$=createNode("statement",$1,NULL);}
            | iteration_statement {$$=createNode("statement",$1,NULL);}
            | jump_statement {$$=createNode("statement",$1,NULL);};

/*_______ LABELED STATEMENT ________*/

labeled_statement : IDENTIFIER COLON statement  {$$=$$=createNode("labeled_statement",createNode("ignore",createNode("IDENTIFIER",NULL,NULL),createNode("COLON",NULL,NULL)),$3);}
                    | CASE constant_expression COLON statement  {$$=createNode("labeled_statement",createNode("ignore",createNode("CASE",NULL,NULL),$2),createNode("ignore",createNode("CASE",NULL,NULL),$4));}
                    | DEFAULT COLON statement {$$=createNode("labeled_statement",createNode("ignore",createNode("DEFAULT",NULL,NULL),createNode("COLON",NULL,NULL)),$3);};

/*_______ COMPOUND STATEMENT ________*/

compound_statement : CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE {$$=createNode("compound_statement",createNode("ignore",createNode("CURLY_BRACKET_OPEN",NULL,NULL),$2),createNode("CURLY_BRACKET_CLOSE",NULL,NULL));};

block_item_list_opt :   {$$ = createNode("block_item_list_opt",NULL,NULL);} 
                    | block_item_list {$$=createNode("block_item_list_opt",$1,NULL);};

/*_______ BLOCK ITEM LIST ________*/

block_item_list : block_item  {$$=createNode("block_item_list",$1,NULL);}
                | block_item_list block_item {$$=createNode("block_item_list",$1,$2);};

/*_______ BLOCK ITEM ________*/

block_item : declaration  {$$=createNode("block_item",$1,NULL);} 
            | statement {$$=createNode("block_item",$1,NULL);};

/*_______ EXPRESSION STATEMENT ________*/

expression_statement : expression_opt SEMICOLON {$$=createNode("expression_statement",$1,createNode("SEMICOLON",NULL,NULL));};

expression_opt :   {$$ = createNode("expression_opt",NULL,NULL);} 
                | expression  {$$=createNode("expression_opt",$1,NULL);}

/*_______ SELECTION STATEMENT ________*/

selection_statement : IF ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement %prec THEN {$$=createNode("selection_statement",createNode("ignore",createNode("IF",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),createNode("ignore",$5,createNode("THEN",NULL,NULL))));}
                    | IF ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement ELSE statement {$$=createNode("selection_statement",createNode("ignore",createNode("IF",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("ELSE",NULL,NULL),$7))));}
                    | SWITCH ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement {$$=createNode("selection_statement",createNode("ignore",createNode("SWITCH",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$5));};

/*_______ ITERATION STATEMENT ________*/

iteration_statement : WHILE ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement {$$=createNode("iteration_statement",createNode("ignore",createNode("WHILE",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),$3)),createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$5));}
                    | DO statement WHILE ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE SEMICOLON {$$=createNode("iteration_statement",createNode("DO",NULL,NULL),createNode("ignore",$2,createNode("ignore",createNode("WHILE",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),createNode("SEMICOLON",NULL,NULL)))))));}
                    | FOR ROUND_BRACKET_OPEN expression_opt SEMICOLON expression_opt SEMICOLON expression_opt ROUND_BRACKET_CLOSE statement {$$=createNode("iteration_statement",createNode("FOR",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$5,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$7,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$9))))))));}
                    | FOR ROUND_BRACKET_OPEN declaration expression_opt SEMICOLON expression_opt ROUND_BRACKET_CLOSE statement {$$=createNode("iteration_statement",createNode("FOR",NULL,NULL),createNode("ignore",createNode("ROUND_BRACKET_OPEN",NULL,NULL),createNode("ignore",$3,createNode("ignore",$4,createNode("ignore",createNode("SEMICOLON",NULL,NULL),createNode("ignore",$6,createNode("ignore",createNode("ROUND_BRACKET_CLOSE",NULL,NULL),$8)))))));};

/*_______ JUMP STATEMENT ________*/

jump_statement : GOTO IDENTIFIER SEMICOLON   {$$=createNode("jump_statement",createNode("GOTO",NULL,NULL),createNode("ignore",createNode("IDENTIFIER",NULL,NULL),createNode("SEMICOLON",NULL,NULL)));}
                | CONTINUE SEMICOLON  {$$=createNode("jump_statement",createNode("CONTINUE",NULL,NULL),createNode("SEMICOLON",NULL,NULL));}
                | BREAK SEMICOLON {$$=createNode("jump_statement",createNode("BREAK",NULL,NULL),createNode("SEMICOLON",NULL,NULL));}
               | RETURN expression_opt SEMICOLON {$$=createNode("jump_statement",createNode("RETURN",NULL,NULL),createNode("ignore",$2,createNode("SEMICOLON",NULL,NULL)));};



/*__ 2. EXTERNAL DEFINITIONS _______________________________________*/

/*_______ TRANSLATION UNIT ________*/

start_symbol : translation_unit {printTree($1,0);}

translation_unit : external_declaration {$$=createNode("translation_unit",$1,NULL);}
                 | translation_unit external_declaration {$$=createNode("translation_unit",$1,$2);};

/*_______ EXTERNAL DECLARATION ________*/

external_declaration : function_definition {$$=createNode("external_declaration",$1,NULL);}
                     | declaration {$$=createNode("external_declaration",$1,NULL);};

/*_______ FUNCTION DEFINITION ________*/

function_definition : declaration_specifiers declarator declaration_list_opt compound_statement {$$=createNode("function_definition",createNode("ignore",$1,$2),createNode("ignore",$3,$4));};

declaration_list_opt :  {$$ = createNode("declaration_list_opt",NULL,NULL);}
                     | declaration_list {$$=createNode("declaration_list_opt",$1,NULL);};

/*_______ DECLARATION LIST ________*/

declaration_list : declaration {$$=createNode("declaration_list",$1,NULL);}
                 | declaration_list declaration {$$=createNode("declaration_list",$1,$2);};



%%
void yyerror(char *ERRORS) {
    fprintf(stderr, "Error: %s\n", ERRORS);
}

