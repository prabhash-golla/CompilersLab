#include "y.tab.h"
#include <stdio.h>
#include "lex.yy.c"
extern int yyparse();

int main() {
    printf("Parsing input...\n");
    yyparse();
    return 0;
}