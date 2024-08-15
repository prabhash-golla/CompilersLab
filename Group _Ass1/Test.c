#include <stdio.h>

// Include the generated lexer file
#include "lex.yy.c" 


// Main function
int main() {

    int nextToken;

    while(nextToken = yylex())
    {
        printf("%d => %s\n",nextToken,yytext);
    }

    return 0;
}