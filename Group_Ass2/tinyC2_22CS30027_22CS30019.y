%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    int yylex();
    void yyerror(char *ERRORS);

    // Node structure for the parse tree
    typedef struct _Node {
        char *value;
        struct _Node *left;
        struct _Node *right;
    } Node;

    Node* createNode(char *value, Node *left, Node *right) {
        Node *node = (Node *)malloc(sizeof(Node));
        node->value = strdup(value);
        node->left = left;
        node->right = right;
        return node;
    }

    void printTree(Node *node, int level) {
        if (node == NULL) return;
        if(strcmp(node->value,"ignore"))
        {
            for (int i = 0; i < level-1; i++) printf("\t");
            if(level>0) printf("%d-->",level);
            printf("%s\n", node->value);
            printTree(node->left, level + 1);
            printTree(node->right, level + 1);
        }
        else
        {
            printTree(node->left, level);
            printTree(node->right, level);
        }
    }
%}

%union {
    int INTVAL;
    struct _Node *node;
}

/*_______ COMMENTS ________*/

%token SINGLE_COMMENT
%token MULTILINE_COMMENT

/*_______ KEYWORDS ________*/

%token AUTO
%token BREAK
%token CASE
%token CHAR
%token CONST
%token CONTINUE
%token DEFAULT
%token DO
%token DOUBLE
%token ELSE
%token ENUM
%token EXTERN
%token REGISTER
%token FLOAT
%token FOR
%token GOTO
%token IF
%token INLINE
%token INT
%token LONG
%token RESTRICT
%token RETURN
%token SHORT
%token SIGNED
%token SIZEOF
%token STATIC
%token STRUCT
%token SWITCH
%token TYPEDEF
%token UNION
%token UNSIGNED
%token VOID
%token VOLATILE
%token WHILE
%token BOOL
%token COMPLEX
%token IMAGINARY

/*_______ PUNCTUATORS AND OPERATORS ________*/

%token SQUARE_BRACKET_OPEN
%token SQUARE_BRACKET_CLOSE
%token ROUND_BRACKET_OPEN
%token ROUND_BRACKET_CLOSE
%token CURLY_BRACKET_OPEN
%token CURLY_BRACKET_CLOSE
%token DOT
%token IMPLIES
%token INCREMENT
%token DECREMENT
%token BITWISE_AND
%token MUL
%token PLUS
%token MINUS
%token BITWISE_NOT
%token NOT
%token DIV
%token MOD
%token LEFT_SHIFT
%token RIGHT_SHIFT
%token LESS_THAN
%token GREATER_THAN
%token LESS_EQUAL
%token GREATER_EQUAL
%token EQUAL
%token NOT_EQUAL
%token BITWISE_XOR
%token BITWISE_OR
%token AND
%token OR
%token QUESTION
%token COLON
%token SEMICOLON
%token ELLIPSIS
%token ASSIGN
%token MUL_EQUAL
%token DIV_EQUAL
%token MOD_EQUAL
%token PLUS_EQUAL
%token MINUS_EQUAL
%token SHIFT_LEFT_EQUAL
%token SHIFT_RIGHT_EQUAL
%token BITWISE_AND_EQUAL
%token BITWISE_XOR_EQUAL
%token BITWISE_OR_EQUAL
%token COMMA
%token HASH

/*_______ IDENTIFIER ________*/

%token IDENTIFIER

/*_______ CONSTANTS ________*/

%token INTEGER
%token FLOATING_CONSTANT
%token CHARACTER_CONSTANT
%token STRING_LITERAL

%nonassoc THEN
%nonassoc ELSE

%type<node> additive_expression argument_expression_list and_expression assignment_expression assignment_expression_opt block_item block_item_list block_item_list_opt cast_expression conditional_expression constant constant_expression declaration declaration_list declaration_list_opt declaration_specifiers declarator designator designator_list designation designation_opt direct_declarator exclusive_or_expression expression expression_opt external_declaration function_definition function_specifier identifier_list identifier_list_opt inclusive_or_expression initializer initializer_list init_declarator init_declarator_list iteration_statement jump_statement logical_and_expression logical_or_expression multiplicative_expression parameter_declaration parameter_list parameter_type_list pointer postfix_expression primary_expression relational_expression selection_statement specifier_qualifier_list shift_expression storage_class_specifier statement
%type<node> unary_expression unary_operator type_name type_qualifier type_qualifier_list type_qualifier_list_opt type_specifier equality_expression labeled_statement compound_statement expression_statement translation_unit 
%start start_symbol

%%


/*__ 1. EXPRESSIONS _______________________________________*/


/*_______ PRIMARY EXPRESSIONS ________*/

constant : INTEGER { $$ = createNode("INTEGER", NULL, NULL); }
         | FLOATING_CONSTANT { $$ = createNode("FLOATING_CONSTANT", NULL, NULL); }
         | CHARACTER_CONSTANT { $$ = createNode("CHARACTER_CONSTANT", NULL, NULL); }
         ;

primary_expression : IDENTIFIER { $$ = createNode("IDENTIFIER", NULL, NULL); }
                   | constant   { $$ = createNode("constant",$1,NULL); }
                   | STRING_LITERAL { $$ = createNode("STRING_LITERAL", NULL, NULL); }
                   | ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE { $$ = createNode("primary_expression", $2, NULL); }
                   ;

/*_______ POSTFIX EXPRESSIONS ________*/

postfix_expression : primary_expression { $$ = $1; }
                   | postfix_expression SQUARE_BRACKET_OPEN expression SQUARE_BRACKET_CLOSE { $$ = createNode("POSTFIX_EXPRESSION", $1, $3); }
                   | postfix_expression ROUND_BRACKET_OPEN ROUND_BRACKET_CLOSE { $$ = createNode("POSTFIX_CALL", $1, NULL); }
                   | postfix_expression ROUND_BRACKET_OPEN argument_expression_list ROUND_BRACKET_CLOSE { $$ = createNode("POSTFIX_CALL_WITH_ARGS", $1, $3); }
                   | postfix_expression DOT IDENTIFIER { $$ = createNode("DOT", $1, createNode("IDENTIFIER", NULL, NULL)); }
                   | postfix_expression IMPLIES IDENTIFIER { $$ = createNode("IMPLIES", $1, createNode("IDENTIFIER", NULL, NULL)); }
                   | postfix_expression INCREMENT { $$ = createNode("INCREMENT", $1, NULL); }
                   | postfix_expression DECREMENT { $$ = createNode("DECREMENT", $1, NULL); }
                   | ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE { $$ = createNode("POSTFIX_INIT", $2, $5); }
                   | ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE { $$ = createNode("POSTFIX_INIT", $2, $5); }
                   ;

/*_______ ARGUMENT EXPRESSION LIST ________*/

argument_expression_list : assignment_expression { $$ = createNode("ARGUMENT_EXPRESSION_LIST", $1, NULL); }
                        | argument_expression_list COMMA assignment_expression { $$ = createNode("ARGUMENT_EXPRESSION_LIST", $1, $3); }
                        ;

/*_______ URNARY EXPRESSION ________*/

unary_expression : postfix_expression { $$ = $1; }
                 | INCREMENT unary_expression { $$ = createNode("INCREMENT", $2, NULL); }
                 | DECREMENT unary_expression { $$ = createNode("DECREMENT", $2, NULL); }
                 | unary_operator cast_expression { $$ = createNode("UNARY_EXPRESSION", $1, $2); }
                 | SIZEOF unary_expression { $$ = createNode("SIZEOF", $2, NULL); }
                 | SIZEOF ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE { $$ = createNode("SIZEOF_TYPE", $3, NULL); }
                 ;

/*_______ URNARY OPERATOR ________*/

unary_operator: BITWISE_AND { $$ = createNode("BITWISE_AND", NULL, NULL); }
              | MUL { $$ = createNode("MUL", NULL, NULL); }
              | PLUS { $$ = createNode("PLUS", NULL, NULL); }
              | MINUS { $$ = createNode("MINUS", NULL, NULL); }
              | BITWISE_NOT { $$ = createNode("BITWISE_NOT", NULL, NULL); }
              | NOT { $$ = createNode("NOT", NULL, NULL); }
              ;

/*_______ CAST EXPRESSION ________*/

cast_expression : unary_expression { $$ = $1; }
                | ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE cast_expression { $$ = createNode("CAST", $2, $4); }
                ;

/*_______ MULTIPLICATIVE EXPRESSION ________*/

multiplicative_expression : cast_expression { $$ = $1; }
                         | multiplicative_expression MUL cast_expression { $$ = createNode("MULTIPLICATIVE_EXPRESSION", $1, $3); }
                         | multiplicative_expression DIV cast_expression { $$ = createNode("DIV_EXPRESSION", $1, $3); }
                         | multiplicative_expression MOD cast_expression { $$ = createNode("MOD_EXPRESSION", $1, $3); }
                         ;

/*_______ ADDITIVE EXPRESSION ________*/

additive_expression : multiplicative_expression { $$ = $1; }
                   | additive_expression PLUS multiplicative_expression { $$ = createNode("ADDITIVE_EXPRESSION", $1, $3); }
                   | additive_expression MINUS multiplicative_expression { $$ = createNode("SUBTRACTIVE_EXPRESSION", $1, $3); }
                   ;

/*_______ SHIFT EXPRESSION ________*/

shift_expression : additive_expression { $$ = $1; }
                 | shift_expression LEFT_SHIFT additive_expression { $$ = createNode("SHIFT_LEFT_EXPRESSION", $1, $3); }
                 | shift_expression RIGHT_SHIFT additive_expression { $$ = createNode("SHIFT_RIGHT_EXPRESSION", $1, $3); }
                 ;

/*_______ RELATIONAL EXPRESSION ________*/

relational_expression : shift_expression { $$ = $1; }
                     | relational_expression LESS_THAN shift_expression { $$ = createNode("LESS_THAN_EXPRESSION", $1, $3); }
                     | relational_expression GREATER_THAN shift_expression { $$ = createNode("GREATER_THAN_EXPRESSION", $1, $3); }
                     | relational_expression LESS_EQUAL shift_expression { $$ = createNode("LESS_EQUAL_EXPRESSION", $1, $3); }
                     | relational_expression GREATER_EQUAL shift_expression { $$ = createNode("GREATER_EQUAL_EXPRESSION", $1, $3); }
                     ;

/*_______ EQUALITY EXPRESSION ________*/

equality_expression : relational_expression { $$ = $1; }
                   | equality_expression EQUAL relational_expression { $$ = createNode("EQUAL_EXPRESSION", $1, $3); }
                   | equality_expression NOT_EQUAL relational_expression { $$ = createNode("NOT_EQUAL_EXPRESSION", $1, $3); }
                   ;

/*_______ AND EXPRESSION ________*/

and_expression : equality_expression { $$ = $1; }
               | and_expression BITWISE_AND equality_expression { $$ = createNode("AND_EXPRESSION", $1, $3); }
               ;

/*_______ EXCLUSIVE OR EXPRESSION ________*/

exclusive_or_expression : and_expression { $$ = $1; }
                        | exclusive_or_expression BITWISE_XOR and_expression { $$ = createNode("XOR_EXPRESSION", $1, $3); }
                        ;

/*_______ INCLUSIVE OR EXPRESSION ________*/

inclusive_or_expression : exclusive_or_expression { $$ = $1; }
                        | inclusive_or_expression BITWISE_OR exclusive_or_expression { $$ = createNode("OR_EXPRESSION", $1, $3); }
                        ;

/*_______ LOGICAL AND EXPRESSION ________*/

logical_and_expression : inclusive_or_expression { $$ = $1; }
                       | logical_and_expression AND inclusive_or_expression { $$ = createNode("LOGICAL_AND", $1, $3); }
                       ;

/*_______ LOGICAL OR EXPRESSION ________*/

logical_or_expression : logical_and_expression { $$ = $1; }
                      | logical_or_expression OR logical_and_expression { $$ = createNode("LOGICAL_OR", $1, $3); }
                      ;

/*_______ CONDITIONAL EXPRESSION ________*/

conditional_expression : logical_or_expression { $$ = $1; }
                      | logical_or_expression QUESTION expression COLON conditional_expression { $$ = createNode("CONDITIONAL", $1, $3); }
                      ;

/*_______ ASSIGNMENT EXPRESSION ________*/

assignment_expression : conditional_expression { $$ = $1; }
                     | unary_expression ASSIGN assignment_expression { $$ = createNode("ASSIGNMENT", $1, $3); }
                     | unary_expression MUL_EQUAL assignment_expression { $$ = createNode("MUL_ASSIGNMENT", $1, $3); }
                     | unary_expression DIV_EQUAL assignment_expression { $$ = createNode("DIV_ASSIGNMENT", $1, $3); }
                     | unary_expression MOD_EQUAL assignment_expression { $$ = createNode("MOD_ASSIGNMENT", $1, $3); }
                     | unary_expression PLUS_EQUAL assignment_expression { $$ = createNode("PLUS_ASSIGNMENT", $1, $3); }
                     | unary_expression MINUS_EQUAL assignment_expression { $$ = createNode("MINUS_ASSIGNMENT", $1, $3); }
                     | unary_expression SHIFT_LEFT_EQUAL assignment_expression { $$ = createNode("SHIFT_LEFT_ASSIGNMENT", $1, $3); }
                     | unary_expression SHIFT_RIGHT_EQUAL assignment_expression { $$ = createNode("SHIFT_RIGHT_ASSIGNMENT", $1, $3); }
                     | unary_expression BITWISE_AND_EQUAL assignment_expression { $$ = createNode("BITWISE_AND_ASSIGNMENT", $1, $3); }
                     | unary_expression BITWISE_XOR_EQUAL assignment_expression { $$ = createNode("BITWISE_XOR_ASSIGNMENT", $1, $3); }
                     | unary_expression BITWISE_OR_EQUAL assignment_expression { $$ = createNode("BITWISE_OR_ASSIGNMENT", $1, $3); }
                     ;

/*_______ EXPRESSION ________*/

expression : assignment_expression { $$ = $1; }
           | expression COMMA assignment_expression { $$ = createNode("EXPRESSION_LIST", $1, $3); }
           ;
/*_______ CONSTANT EXPRESSION ________*/

constant_expression : conditional_expression { $$ = createNode("constant_expression", $1, NULL); };


/*__ 2. DECLARATIONS _______________________________________*/


/*_______ DECLARATION ________*/

declaration : declaration_specifiers SEMICOLON { $$ = createNode("declaration", $1, NULL); }
            | declaration_specifiers init_declarator_list SEMICOLON { $$ = createNode("declaration", $1, $2); };

/*_______ DECLARATION SPECIFIER ________*/

declaration_specifiers : storage_class_specifier {$$ = createNode("declaration_specifier", $1, NULL);};
                        | type_specifier {$$ = createNode("declaration_specifier", $1, NULL);};
                        | type_qualifier {$$ = createNode("declaration_specifier", $1, NULL);};
                        | function_specifier {$$ = createNode("declaration_specifier", $1, NULL);};
                        |storage_class_specifier declaration_specifiers {$$ = createNode("declaration_specifiers", $1, $2);};
                        | type_specifier declaration_specifiers {$$ = createNode("declaration_specifiers", $1, $2);};
                        | type_qualifier declaration_specifiers {$$ = createNode("declaration_specifiers", $1, $2);};
                        | function_specifier declaration_specifiers {$$ = createNode("declaration_specifiers", $1, $2);};

/*_______ INIT DECLARATION LIST ________*/

init_declarator_list : init_declarator {$$ = createNode("init_declerator_list", $1, NULL);}
                        | init_declarator_list COMMA init_declarator {$$ = createNode("init_declerator_list", $1, $3);};

/*_______ INIT DECLARATOR ________*/

init_declarator : declarator {$$ = createNode("init_declerator", $1,NULL);}
                | declarator ASSIGN initializer {$$ = createNode("init_declerator", $1, $3);};

/*_______ STORAGE CLASS SPECIFIER ________*/

storage_class_specifier : EXTERN {$$ = createNode("storage_class_specifier", NULL, NULL);} | STATIC {$$ = createNode("storage_class_specifier", NULL, NULL);};

/*_______ TYPE SPECIFIER ________*/

type_specifier : VOID { $$ = createNode("type-specidier", NULL, NULL); }| CHAR { $$ = createNode("type-specidier", NULL, NULL); }| SHORT { $$ = createNode("type-specidier", NULL, NULL); }| INT { $$ = createNode("type-specidier", NULL, NULL); }| LONG { $$ = createNode("type-specidier", NULL, NULL); }| FLOAT { $$ = createNode("type-specidier", NULL, NULL); }| DOUBLE { $$ = createNode("type-specidier", NULL, NULL); };

/*_______ SPECIFIER QUALIFIER LIST ________*/

specifier_qualifier_list : type_specifier specifier_qualifier_list | type_qualifier specifier_qualifier_list  {$$ = createNode("specifier_qualifier_list", $1, $2);}
                        | type_specifier | type_qualifier {$$ = createNode("specifier_qualifier_list", $1, NULL);};

/*_______ TYPE QUALIFIER ________*/

type_qualifier : CONST {$$ = createNode("type_qualifier", NULL, NULL);}| RESTRICT {$$ = createNode("type_qualifier", NULL, NULL);}| VOLATILE {$$ = createNode("type_qualifier", NULL, NULL);};

/*_______ FUNCTION SPECIFIER ________*/

function_specifier : INLINE {$$ = createNode("function_specifier", NULL, NULL);};

/*_______ DECLARATOR ________*/

declarator : pointer direct_declarator {$$ = createNode("declarator", $1, $2);}
            | direct_declarator {$$ = createNode("declarator", $1, NULL);};

/*_______ DIRECT DECLARATOR ________*/

direct_declarator : IDENTIFIER {$$ = createNode("direct_declarator", NULL, NULL);}
                    | ROUND_BRACKET_OPEN declarator ROUND_BRACKET_CLOSE {$$ = createNode("direct_declarator", $2, NULL);}
                    | direct_declarator SQUARE_BRACKET_OPEN  type_qualifier_list_opt assignment_expression_opt SQUARE_BRACKET_CLOSE {$$ = createNode("direct_declarator", $1, createNode("ignore",$3,$4));}
                    | direct_declarator SQUARE_BRACKET_OPEN STATIC type_qualifier_list_opt assignment_expression SQUARE_BRACKET_CLOSE {$$ = createNode("direct_declarator", $1, createNode("ignore",$4,$5));}
                    | direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list STATIC assignment_expression SQUARE_BRACKET_CLOSE {$$ = createNode("direct_declarator", $1, createNode("ignore",$3,$5));}
                    | direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list_opt MUL SQUARE_BRACKET_CLOSE {$$ = createNode("direct_declarator", $1, $3);}
                    | direct_declarator ROUND_BRACKET_OPEN parameter_type_list ROUND_BRACKET_CLOSE {$$ = createNode("direct_declarator", $1, $3);}
                    | direct_declarator ROUND_BRACKET_OPEN identifier_list_opt ROUND_BRACKET_CLOSE {$$ = createNode("direct_declarator", $1, $3);};

type_qualifier_list_opt : {$$=NULL;}  
                        | type_qualifier_list {$$ = $1;};

assignment_expression_opt :  {$$=NULL;}
                          | assignment_expression {$$ = $1;};

identifier_list_opt :  {$$=NULL;}
                    | identifier_list {$$=$1;};

/*_______ POINTER ________*/

pointer : MUL type_qualifier_list_opt {$$=createNode("pointer", $2, NULL);}
        | MUL type_qualifier_list_opt pointer {$$=createNode("pointer", $2, $3);};

/*_______ TYPE QUALIFIER LIST ________*/

type_qualifier_list : type_qualifier {$$=$1;}
                    | type_qualifier_list type_qualifier {$$=createNode("type_qualifier_list", $1, $2);};

/*_______ PARAMETER TYPE LIST ________*/

parameter_type_list : parameter_list {$$=$1;}
                    | parameter_list COMMA ELLIPSIS {$$=createNode("parameter_type_list", $1, NULL);};

/*_______ PARAMETER LIST ________*/

parameter_list : parameter_declaration {$$=$1;}
               | parameter_list COMMA parameter_declaration {$$=createNode("parameter_list", $1, $3);};

/*_______ PARAMETER DECLARATION ________*/

parameter_declaration : declaration_specifiers declarator {$$=createNode("parameter_declaration", $1, $2);}
                      | declaration_specifiers {$$=$1;};

/*_______ IDENTIFIER LIST ________*/

identifier_list: IDENTIFIER {$$=createNode("identifier_list",NULL,NULL);}
               | identifier_list COMMA IDENTIFIER {$$=createNode("identifier_list", $1, NULL);};

/*_______ TYPE NAME ________*/

type_name : specifier_qualifier_list {$$=$1;};

/*_______ INITIALIZER ________*/

initializer : assignment_expression {$$=$1;}
            | CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE {$$=createNode("initializer",$2,NULL);}
            | CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE {$$=createNode("initializer",$2,NULL);};

/*_______ INITIALIZER LIST ________*/

initializer_list : designation_opt initializer {$$=createNode("initializer_list",$1,$2);}
                 | initializer_list COMMA designation_opt initializer {$$=createNode("initializer_list",$1,createNode("ignore",$3,$4));};

designation_opt : designation  {$$=$1;}
                | {$$=NULL;};

/*_______ DESIGNATION ________*/

designation : designator_list ASSIGN {$$=createNode("designation",$1,NULL);};

/*_______ DESIGNATOR LIST ________*/

designator_list : designator {$$=createNode("designator_list",$1,NULL);}
                | designator_list designator {$$=createNode("designator_list",$1,$2);};

/*_______ DESIGNATOR ________*/

designator : SQUARE_BRACKET_OPEN constant_expression SQUARE_BRACKET_CLOSE  {$$=createNode("designator",$2,NULL);}
             | DOT IDENTIFIER {$$=createNode("designator",NULL,NULL);};



/*__ 2. STATEMENTS _______________________________________*/


/*_______ STATEMENT ________*/

statement : labeled_statement {$$=$1;}
            | compound_statement {$$=$1;}
            | expression_statement {$$=$1;}
            | selection_statement {$$=$1;}
            | iteration_statement {$$=$1;}
            | jump_statement {$$=$1;};

/*_______ LABELED STATEMENT ________*/

labeled_statement : IDENTIFIER COLON statement  {$$=$$=createNode("labeled_statement",$3,NULL);}
                    | CASE constant_expression COLON statement  {$$=createNode("labeled_statement",$2,$4);}
                    | DEFAULT COLON statement {$$=createNode("labeled_statement",$3,NULL);};

/*_______ COMPOUND STATEMENT ________*/

compound_statement : CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE {$$=$2;};

block_item_list_opt :   {$$=NULL;} | block_item_list {$$=createNode("block_item_list",$1,NULL);};

/*_______ BLOCK ITEM LIST ________*/

block_item_list : block_item  {$$=$1;}| block_item_list block_item {$$=createNode("ignore",$1,$2);};

/*_______ BLOCK ITEM ________*/

block_item : declaration  {$$=$1;} | statement {$$=$1;};

/*_______ EXPRESSION STATEMENT ________*/

expression_statement : expression_opt SEMICOLON {$$=$1;};

expression_opt :   {$$=NULL;} | expression  {$$=$1;}

/*_______ SELECTION STATEMENT ________*/

selection_statement : IF ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement %prec THEN {$$=createNode("selection_statement",createNode("IF",$3,NULL),createNode("THEN",$5,NULL));}
                    | IF ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement ELSE statement {$$=createNode("selection_statement",createNode("IF",$3,NULL),createNode("ignore",createNode("THEN",$5,NULL),createNode("ELSE",$7,NULL)));}
                    | SWITCH ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement {$$=createNode("selection_statement",createNode("SWITCH",$3,NULL),createNode("THEN",$5,NULL));};

/*_______ ITERATION STATEMENT ________*/

iteration_statement : WHILE ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement {$$=createNode("iteration_statement",$3,$5);}
                    | DO statement WHILE ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE SEMICOLON {$$=createNode("iteration_statement",$2,$5);}
                    | FOR ROUND_BRACKET_OPEN expression_opt SEMICOLON expression_opt SEMICOLON expression_opt ROUND_BRACKET_CLOSE statement {$$=createNode("iteration_statement",$3,$5);}
                    | FOR ROUND_BRACKET_OPEN declaration expression_opt SEMICOLON expression_opt ROUND_BRACKET_CLOSE statement {$$=createNode("iteration_statement",createNode("ignore",$3,$4),createNode("ignore",$6,$8));};

/*_______ JUMP STATEMENT ________*/

jump_statement : GOTO IDENTIFIER SEMICOLON   {$$=createNode("jump_statement",NULL,NULL);}
                | CONTINUE SEMICOLON  {$$=createNode("jump_statement",NULL,NULL);}
                | BREAK SEMICOLON {$$=createNode("jump_statement",NULL,NULL);}
               | RETURN expression_opt SEMICOLON {$$=createNode("jump_statement",$2,NULL);};



/*__ 2. EXTERNAL DEFINITIONS _______________________________________*/

/*_______ TRANSLATION UNIT ________*/

start_symbol : translation_unit {printTree($1,0);}

translation_unit : external_declaration {$$=$1;}
                 | translation_unit external_declaration {$$=createNode("translation_unit",$1,$2);};

/*_______ EXTERNAL DECLARATION ________*/

external_declaration : function_definition {$$=$1;}
                     | declaration {$$=$1;};

/*_______ FUNCTION DEFINITION ________*/

function_definition : declaration_specifiers declarator declaration_list_opt compound_statement {$$=createNode("function_definition",createNode("ignore",$1,$2),createNode("ignore",$3,$4));};

declaration_list_opt :  {$$=NULL;}
                     | declaration_list {$$=createNode("declaraation_list",$1,NULL);};

/*_______ DECLARATION LIST ________*/

declaration_list : declaration {$$=$1;}
                 | declaration_list declaration {$$=createNode("ignore",$1,$2);};



%%
void yyerror(char *ERRORS) {
    fprintf(stderr, "Error: %s\n", ERRORS);
}


