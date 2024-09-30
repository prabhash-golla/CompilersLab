%{
    void yyerror(char * s);      // Function declaration for error handling
    int yylex();        // Function declaration for the lexer
%}


%%

"0" {return ZERO;}
"1" {return ONE;}
[2-9] {yylval.val=strdup(yytext); return NUM;}
"+" {return PLUS;}
"-" {return MINUS;}
"x" {return VAR;}
"^" {return POW;}
[ /t/n] {}

%%

int yywrap(void)
{
    return 1; // Return 1 to indicate that there are no more tokens
}