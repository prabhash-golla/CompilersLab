%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "22CS30027.h"
int yylex();
void yyerror();
extern nametable T;
extern Stack A;
%}

%union {int num; char* id;}
%start PROGRAM
%token <num> NUM SET POW SUB ADD MUL DIV MOD LP RP
%token <id> ID
%type <num> STMT PROGRAM SETSTMT EXPRSTMT OP ARG EXPR

%%
PROGRAM: STMT PROGRAM
    | STMT
    ;
STMT: SETSTMT
    | EXPRSTMT
    ;
SETSTMT: LP SET ID NUM RP {T=setter(T,$3,$4);}
    | LP SET ID ID RP {T=setter(T,$3,getter(T,$4));}
    | LP SET ID EXPR RP {T=setter(T,$3,Caliculate(top(&A),T)); FreeTree(top(&A));pop(&A);}
    ;
EXPRSTMT: EXPR {printf("Standalone expression evaluates to %d\n", $$=Caliculate(top(&A),T)); pop(&A);}
    ;
EXPR: LP OP ARG ARG RP {
                Ptree* R = top(&A); pop(&A);
                Ptree* L = top(&A); pop(&A);
                Ptree* N = top(&A); pop(&A);
                Ptree* K = (Ptree*)malloc(sizeof(Ptree));
                K->nodeT = N->nodeT;
                K->Left = L;
                K->Right = R;
                K->oper = N->oper;
                free(N);
                push(&A, K);
            }
    ;
OP: MUL {
            Ptree* K = (Ptree*)malloc(sizeof(Ptree));
            K->oper = (char*)malloc(2 * sizeof(char));
            strcpy(K->oper, "*");
            K->nodeT = 1;
            K->Left = NULL;
            K->Right = NULL;
            push(&A, K);
        }
    | ADD {
            Ptree* K = (Ptree*)malloc(sizeof(Ptree));
            K->oper = (char*)malloc(2 * sizeof(char));
            strcpy(K->oper, "+");
            K->nodeT = 1;
            K->Left = NULL;
            K->Right = NULL;
            push(&A, K);
        }
    | SUB {
            Ptree* K = (Ptree*)malloc(sizeof(Ptree));
            K->oper = (char*)malloc(2 * sizeof(char));
            strcpy(K->oper, "-");
            K->nodeT = 1;
            K->Left = NULL;
            K->Right = NULL;
            push(&A, K);
        }
    | DIV {
            Ptree* K = (Ptree*)malloc(sizeof(Ptree));
            K->oper = (char*)malloc(2 * sizeof(char));
            strcpy(K->oper, "/");
            K->nodeT = 1;
            K->Left = NULL;
            K->Right = NULL;
            push(&A, K);
        }
    | MOD {
            Ptree* K = (Ptree*)malloc(sizeof(Ptree));
            K->oper = (char*)malloc(2 * sizeof(char));
            strcpy(K->oper, "%");
            K->nodeT = 1;
            K->Left = NULL;
            K->Right = NULL;
            push(&A, K);
        }
    | POW {
            Ptree* K = (Ptree*)malloc(sizeof(Ptree));
            K->oper = (char*)malloc(3 * sizeof(char));
            strcpy(K->oper, "**");
            K->nodeT = 1;
            K->Left = NULL;
            K->Right = NULL;
            push(&A, K);
        }
ARG: ID {
            Ptree* K = (Ptree*)malloc(sizeof(Ptree));
            K->oper = (char*)malloc((strlen($1) + 1) * sizeof(char));
            strcpy(K->oper, $1);
            K->nodeT = 2;
            K->Left = NULL;
            K->Right = NULL;
            push(&A, K);
        }
    | NUM {
            Ptree* K = (Ptree*)malloc(sizeof(Ptree));
            char str[12];  // Buffer for integer to string conversion
            sprintf(str, "%d", $1);
            K->oper = (char*)malloc((strlen(str) + 1) * sizeof(char));
            strcpy(K->oper, str);
            K->nodeT = 3;
            K->Left = NULL;
            K->Right = NULL;
            push(&A, K);
        }
    | EXPR
    ;
%%

void yyerror() {
    printf("Error\n");
}
