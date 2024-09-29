#include<stdio.h>
#include "lex.yy.c"
#include "y.tab.c" 

/*
    Group :- TinyC-67
    Golla Meghanandh Manvith Prabhash :- 22CS30027
    Darapu Adhithya  :- 22CS30019
*/

int main()
{
    yyparse();
}