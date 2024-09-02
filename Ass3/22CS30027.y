%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex();  // Function declaration for the lexer
void yyerror(); // Function declaration for error handling

// Define the structure for the parse tree node
typedef struct _Ptree {
    char* oper;           // Operator or value (ID/NUM)
    int nodeT;           // Type of node: operator, ID, or NUM
    struct _Ptree *Left; // Pointer to the left subtree
    struct _Ptree *Right; // Pointer to the right subtree
} Ptree;

// Define the structure for a symbol table entry
typedef struct _node {
    char *name;          // Name of the variable
    int nocc;           // Value associated with the variable
    struct _node *next; // Pointer to the next node in the symbol table
} node;

typedef node *nametable; // Type alias for a pointer to the symbol table

extern nametable T; // External symbol table variable

// Function declarations
long long Caliculate(Ptree* Tree, nametable VT); // Calculate the value of the parse tree
nametable setter(nametable T, char *id, int num); // Set a variable's value in the symbol table
int getter(nametable T, char *id); // Get a variable's value from the symbol table
int power(int a, int b); // Calculate the power of a number
void FreeTree(Ptree* Tree); // Free the memory allocated for the parse tree

%}

// Union for the semantic values of tokens
%union {
    int num;   // Numeric value
    char* id;  // Identifier
    Ptree* node; // Parse tree node
}

// Define the start symbol for parsing
%start PROGRAM

// Token definitions with associated types
%token <num> NUM SET POW SUB ADD MUL DIV MOD LP RP
%token <id> ID

// Define the types for non-terminal symbols
%type <num> STMT PROGRAM SETSTMT EXPRSTMT 
%type <node> OP ARG EXPR

%%

// Rules for parsing
PROGRAM:
    STMT PROGRAM      // Rule for a program consisting of statements
    | STMT           // Rule for a single statement
    ;

STMT:
    SETSTMT          // Rule for a statement being a set statement
    | EXPRSTMT       // Rule for a statement being an expression statement
    ;

SETSTMT:
    LP SET ID NUM RP  { T = setter(T, $3, $4); } // Set a variable to a numeric value
    | LP SET ID ID RP { T = setter(T, $3, getter(T, $4)); } // Set a variable to another variable's value
    | LP SET ID EXPR RP { T = setter(T, $3, Caliculate($4, T)); free($4->oper); free($4); } // Set a variable to the result of an expression
    ;

EXPRSTMT:
    EXPR            { printf("Standalone expression evaluates to %d\n", $$ = Caliculate($1, T)); free($1->oper); free($1); } // Print result of standalone expression
    ;

EXPR:
    LP OP ARG ARG RP { Ptree* R = $4; Ptree* L = $3; Ptree* N = $2; N->Left = L; N->Right = R; $$ = N; } // Construct an expression tree
    ;

OP:
    MUL {
        Ptree* K = (Ptree*)malloc(sizeof(Ptree)); // Allocate memory for a new node
        K->oper = (char*)malloc(2 * sizeof(char)); // Allocate memory for the operator string
        strcpy(K->oper, "*"); // Set the operator to "*"
        K->nodeT = 1; // Set the node type to operator
        K->Left = NULL; // Left child is NULL
        K->Right = NULL; // Right child is NULL
        $$ = K; // Return the new node
    }
    | ADD {
        Ptree* K = (Ptree*)malloc(sizeof(Ptree)); // Allocate memory for a new node
        K->oper = (char*)malloc(2 * sizeof(char)); // Allocate memory for the operator string
        strcpy(K->oper, "+"); // Set the operator to "+"
        K->nodeT = 1; // Set the node type to operator
        K->Left = NULL; // Left child is NULL
        K->Right = NULL; // Right child is NULL
        $$ = K; // Return the new node
    }
    | SUB {
        Ptree* K = (Ptree*)malloc(sizeof(Ptree)); // Allocate memory for a new node
        K->oper = (char*)malloc(2 * sizeof(char)); // Allocate memory for the operator string
        strcpy(K->oper, "-"); // Set the operator to "-"
        K->nodeT = 1; // Set the node type to operator
        K->Left = NULL; // Left child is NULL
        K->Right = NULL; // Right child is NULL
        $$ = K; // Return the new node
    }
    | DIV {
        Ptree* K = (Ptree*)malloc(sizeof(Ptree)); // Allocate memory for a new node
        K->oper = (char*)malloc(2 * sizeof(char)); // Allocate memory for the operator string
        strcpy(K->oper, "/"); // Set the operator to "/"
        K->nodeT = 1; // Set the node type to operator
        K->Left = NULL; // Left child is NULL
        K->Right = NULL; // Right child is NULL
        $$ = K; // Return the new node
    }
    | MOD {
        Ptree* K = (Ptree*)malloc(sizeof(Ptree)); // Allocate memory for a new node
        K->oper = (char*)malloc(2 * sizeof(char)); // Allocate memory for the operator string
        strcpy(K->oper, "%"); // Set the operator to "%"
        K->nodeT = 1; // Set the node type to operator
        K->Left = NULL; // Left child is NULL
        K->Right = NULL; // Right child is NULL
        $$ = K; // Return the new node
    }
    | POW {
        Ptree* K = (Ptree*)malloc(sizeof(Ptree)); // Allocate memory for a new node
        K->oper = (char*)malloc(3 * sizeof(char)); // Allocate memory for the operator string
        strcpy(K->oper, "**"); // Set the operator to "**"
        K->nodeT = 1; // Set the node type to operator
        K->Left = NULL; // Left child is NULL
        K->Right = NULL; // Right child is NULL
        $$ = K; // Return the new node
    }

ARG:
    ID {
        Ptree* K = (Ptree*)malloc(sizeof(Ptree)); // Allocate memory for a new node
        K->oper = (char*)malloc((strlen($1) + 1) * sizeof(char)); // Allocate memory for the identifier string
        strcpy(K->oper, $1); // Set the operator to the identifier
        K->nodeT = 2; // Set the node type to ID
        K->Left = NULL; // Left child is NULL
        K->Right = NULL; // Right child is NULL
        $$ = K; // Return the new node
    }
    | NUM {
        Ptree* K = (Ptree*)malloc(sizeof(Ptree)); // Allocate memory for a new node
        char str[12];  // Buffer for integer to string conversion
        sprintf(str, "%d", $1); // Convert integer to string
        K->oper = (char*)malloc((strlen(str) + 1) * sizeof(char)); // Allocate memory for the numeric string
        strcpy(K->oper, str); // Set the operator to the numeric string
        K->nodeT = 3; // Set the node type to NUM
        K->Left = NULL; // Left child is NULL
        K->Right = NULL; // Right child is NULL
        $$ = K; // Return the new node
    }
    | EXPR
    ;

%%

// Error handling function
void yyerror() {
    printf("Error\n"); // Print a generic error message
}
