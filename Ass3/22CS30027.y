%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int yylex();
void yyerror();
//extern Stack A;

typedef struct _Ptree{
    char* oper;
    int nodeT;
    struct _Ptree *Left;
    struct _Ptree *Right;
} Ptree;

typedef struct _node {
   char *name;
   int nocc;
   struct _node *next;
} node;

typedef node *nametable;

extern nametable T;

long long Caliculate(Ptree* Tree,nametable VT);

nametable setter ( nametable T, char *id,int num );

int getter (nametable T,char *id);

int power (int a,int b);

void FreeTree (Ptree* Tree);

%}

%union {int num; char* id;Ptree* node;}
%start PROGRAM
%token <num> NUM SET POW SUB ADD MUL DIV MOD LP RP
%token <id> ID
%type <num> STMT PROGRAM SETSTMT EXPRSTMT 
%type <node> OP ARG EXPR

%%
PROGRAM: STMT PROGRAM
    | STMT
    ;
STMT: SETSTMT
    | EXPRSTMT
    ;
SETSTMT: LP SET ID NUM RP {T=setter(T,$3,$4);}
    | LP SET ID ID RP {T=setter(T,$3,getter(T,$4));}
    | LP SET ID EXPR RP {T=setter(T,$3,Caliculate($4,T));free($4->oper);free($4);}
    ;
EXPRSTMT: EXPR {printf("Standalone expression evaluates to %d\n", $$=Caliculate($1,T));free($1->oper);free($1);}
    ;
EXPR: LP OP ARG ARG RP {
                Ptree* R = $4;
                Ptree* L = $3;
                Ptree* N = $2;
                N->Left = L;
                N->Right = R;
                $$=N;
            }
    ;
OP: MUL {
            Ptree* K = (Ptree*)malloc(sizeof(Ptree));
            K->oper = (char*)malloc(2 * sizeof(char));
            strcpy(K->oper, "*");
            K->nodeT = 1;
            K->Left = NULL;
            K->Right = NULL;
            $$=K;
        }
    | ADD {
            Ptree* K = (Ptree*)malloc(sizeof(Ptree));
            K->oper = (char*)malloc(2 * sizeof(char));
            strcpy(K->oper, "+");
            K->nodeT = 1;
            K->Left = NULL;
            K->Right = NULL;
            $$=K;
        }
    | SUB {
            Ptree* K = (Ptree*)malloc(sizeof(Ptree));
            K->oper = (char*)malloc(2 * sizeof(char));
            strcpy(K->oper, "-");
            K->nodeT = 1;
            K->Left = NULL;
            K->Right = NULL;
            $$=K;
        }
    | DIV {
            Ptree* K = (Ptree*)malloc(sizeof(Ptree));
            K->oper = (char*)malloc(2 * sizeof(char));
            strcpy(K->oper, "/");
            K->nodeT = 1;
            K->Left = NULL;
            K->Right = NULL;
            $$=K;
        }
    | MOD {
            Ptree* K = (Ptree*)malloc(sizeof(Ptree));
            K->oper = (char*)malloc(2 * sizeof(char));
            strcpy(K->oper, "%");
            K->nodeT = 1;
            K->Left = NULL;
            K->Right = NULL;
            $$=K;
        }
    | POW {
            Ptree* K = (Ptree*)malloc(sizeof(Ptree));
            K->oper = (char*)malloc(3 * sizeof(char));
            strcpy(K->oper, "**");
            K->nodeT = 1;
            K->Left = NULL;
            K->Right = NULL;
            $$=K;
        }
ARG: ID {
            Ptree* K = (Ptree*)malloc(sizeof(Ptree));
            K->oper = (char*)malloc((strlen($1) + 1) * sizeof(char));
            strcpy(K->oper, $1);
            K->nodeT = 2;
            K->Left = NULL;
            K->Right = NULL;
            $$=K;
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
            $$=K;
        }
    | EXPR
    ;
%%

void yyerror() {
    printf("Error\n");
}
