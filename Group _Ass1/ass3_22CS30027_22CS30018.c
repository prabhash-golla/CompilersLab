#include <stdio.h>
#include "lex.yy.c" 

/*
    Group :- TinyC-67
    Golla Meghanandh Manvith Prabhash :- 22CS30027
    Darapu Adhithya  :- 22CS30018
*/

int main() {

    int nextToken;

    while(nextToken = yylex())
    {
        switch (nextToken)
        {
            
            case KEYWORDS:
            {
                printf("< KEYWORD : %s >\n",yytext); 
                break;
            }
            case IDENTIFIERS:
            {
                printf("< IDENTIFIER : %s >\n",yytext); 
                break;             
            }
            case INTEGER:
            {
                printf("< INTEGER : %s >\n",yytext); 
                break;
            }
            case FLOAT:
            {
                printf("< FLOAT : %s >\n",yytext); 
                break;             
            }
            case ENUM:
            {
                printf("< ENUMERATION CONSTANT : %s >\n",yytext); 
                break;
            }
            case CCHAR :
            {
                printf("< CCHAR : %s >\n",yytext); 
                break;             }
    
            case SCHAR :
            {
                printf("< SCHAR : %s >\n",yytext); 
                break;
            }
            case PUNCTUATORS :
            {
                printf("< PUNCTUATOR : \"%s\" >\n",yytext); 
                break;            
            }
            case SCMNT:
            {
                if (yytext[strlen(yytext) - 1] == '\n') {
                    yytext[strlen(yytext) - 1] = '\0';
                }
                printf("< SINGLE LINE COMMENTS : %s >\n",yytext); 
                break;
            }
            case MLCMNT:
            {
                printf("< MULTI LINE COMMENTS : %s >\n",yytext);
                break; 
            }
            default:
            {
                printf("< OTHERS : %s >\n ",yytext);
                break;
            }
        
        }
    }
    return 0;
}