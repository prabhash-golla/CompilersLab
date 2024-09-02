%{
#include "y.tab.h"
#include <string.h>
#include <stdlib.h>
void yyerror();
int yylex();
%}
%%
"set"   {return SET;}
[_a-zA-Z][_a-zA-Z0-9]* {
    // it will not work without strdup if we use we are getting memory leakage
    yylval.id=strdup(yytext);
    return ID;
    }
[+-]?[0-9]+   {yylval.num=atoi(yytext); return NUM;}
"**"  {return POW;}
"-"   {return SUB;}
"+"   {return ADD;}
"*"   {return MUL;}
"/"   {return DIV;}
"%"   {return MOD;}
"("   {return LP;}
")"   {return RP;}
[ \t\n] {}
.        {printf("Unexpected token %s\n",yytext);}     
%%

int yywrap(void)
{
    return 1;
}

