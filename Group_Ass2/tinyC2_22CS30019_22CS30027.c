#include<stdio.h>
#include "lex.yy.c"
#include "y.tab.c" 
// int yyparse();
int main()
{
    yyparse();
}