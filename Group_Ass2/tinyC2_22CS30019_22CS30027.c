#include<stdio.h>
#include "lex.yy.c"
#include "y.tab.h"
extern int yyparse();
int main()
{
    yyparse();
}