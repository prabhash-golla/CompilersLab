%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    extern int yylex();
    void yyerror(char *ERRORS);

    // Node structure for the parse tree
    typedef struct Node {
        char *value;
        struct Node *left;
        struct Node *right;
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
        printTree(node->right, level + 1);
        for (int i = 0; i < level; i++) printf("   ");
        printf("%s\n", node->value);
        printTree(node->left, level + 1);
    }
%}

%union {
    int INTVAL;
    Node *node;
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

%start translation_unit

%%


/*__ 1. EXPRESSIONS _______________________________________*/


/*_______ PRIMARY EXPRESSIONS ________*/

constant : INTEGER { $$ = createNode("INTEGER", NULL, NULL); }
         | FLOATING_CONSTANT { $$ = createNode("FLOATING_CONSTANT", NULL, NULL); }
         | CHARACTER_CONSTANT { $$ = createNode("CHARACTER_CONSTANT", NULL, NULL); }
         ;

primary_expression : IDENTIFIER { $$ = createNode("IDENTIFIER", NULL, NULL); }
                   | constant
                   | STRING_LITERAL { $$ = createNode("STRING_LITERAL", NULL, NULL); }
                   | ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE { $$ = createNode("PRIMARY_EXPRESSION", $2, NULL); }
                   ;

/*_______ POSTFIX EXPRESSIONS ________*/

postfix_expression : primary_expression { $$ = $1; }
                   | postfix_expression SQUARE_BRACKET_OPEN expression SQUARE_BRACKET_CLOSE { $$ = createNode("POSTFIX_EXPRESSION", $1, $3); }
                   | postfix_expression ROUND_BRACKET_OPEN ROUND_BRACKET_CLOSE { $$ = createNode("POSTFIX_CALL", $1, NULL); }
                   | postfix_expression ROUND_BRACKET_OPEN argument_expression_list ROUND_BRACKET_CLOSE { $$ = createNode("POSTFIX_CALL_WITH_ARGS", $1, $3); }
                   | postfix_expression DOT IDENTIFIER { $$ = createNode("DOT", $1, createNode($3, NULL, NULL)); }
                   | postfix_expression IMPLIES IDENTIFIER { $$ = createNode("IMPLIES", $1, createNode($3, NULL, NULL)); }
                   | postfix_expression INCREMENT { $$ = createNode("INCREMENT", $1, NULL); }
                   | postfix_expression DECREMENT { $$ = createNode("DECREMENT", $1, NULL); }
                   | ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE
                   | ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE { $$ = createNode("POSTFIX_INIT", $3, NULL); }
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

/*_______ STATEMENTS ________*/

statement : expression_statement { $$ = $1; }
          | compound_statement { $$ = $1; }
          | selection_statement { $$ = $1; }
          | iteration_statement { $$ = $1; }
          | jump_statement { $$ = $1; }
          ;

/*_______ TRANSLATION UNIT ________*/

translation_unit : external_declaration { $$ = $1; }
                 | translation_unit external_declaration { $$ = createNode("TRANSLATION_UNIT", $1, $2); }
                 ;

/*_______ EXTERNAL DECLARATION ________*/

external_declaration : function_definition { $$ = $1; }
                     | declaration { $$ = $1; }
                     ;

/*_______ ERROR HANDLING ________*/

%% 

void yyerror(char *ERRORS) {
    fprintf(stderr, "Error: %s\n", ERRORS);
}


