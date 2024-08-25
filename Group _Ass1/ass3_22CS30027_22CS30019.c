#include <stdio.h>
#include "lex.yy.c"  // Include the generated lexer file

/*
    Group :- TinyC-67
    Golla Meghanandh Manvith Prabhash :- 22CS30027
    Darapu Adhithya  :- 22CS30019
*/

int main() {

    int nextToken;  // Variable to hold the next token from the lexer
    printf("TOKENS:\n");
    // Loop to process each token returned by the lexer
    while(nextToken = yylex())
    {
        // Switch statement to handle different types of tokens
        switch (nextToken)
        {
            // Case for keyword tokens
            case KEYWORDS:
            {
                // Print the token type and the lexeme (actual string value)
                printf("\t< KEYWORD : %s >\n", yytext); 
                break;
            }

            // Case for identifier tokens (e.g., variable names)
            case IDENTIFIERS:
            {
                printf("\t< IDENTIFIER : %s >\n", yytext); 
                break;             
            }

            // Case for integer literal tokens
            case INTEGER:
            {
                printf("\t< INTEGER : %s >\n", yytext); 
                break;
            }

            // Case for floating-point literal tokens
            case FLOAT:
            {
                printf("\t< FLOAT : %s >\n", yytext); 
                break;             
            }

            // Case for enumeration constant tokens
            // case ENUM:
            // {
            //     printf("\t< ENUMERATION CONSTANT : %s >\n", yytext); 
            //     break;
            // }

            // Case for character literal tokens
            case CCHAR:
            {
                printf("\t< CCHAR : %s >\n", yytext); 
                break;
            }
    
            // Case for string literal tokens
            case SCHAR:
            {
                printf("\t< SCHAR : %s >\n", yytext); 
                break;
            }

            // Case for punctuator tokens (e.g., symbols like `;`, `{`, `}`)
            case PUNCTUATORS:
            {
                printf("\t< PUNCTUATOR : \"%s\" >\n", yytext); 
                break;            
            }

            // Case for single-line comment tokens
            case SCMNT:
            {
                // If the comment ends with a newline, remove it for cleaner output
                printf("\t< SINGLE LINE COMMENT : %s >\n", yytext); 
                break;
            }

            // Case for multi-line comment tokens
            case MLCMNT:
            {
                printf("\t< MULTI LINE COMMENT :\n %s >\n", yytext);
                break; 
            }

            // Default case for any other tokens that don't match the above
            default:
            {
                printf("\t< OTHERS : %s >\n", yytext);
                break;
            }
        }
    }

    return 0;  // Return 0 to indicate successful execution
}
