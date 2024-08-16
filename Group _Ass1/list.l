%{
#include "Tokens.h"
%}

KEYWORDS "break"|"case"|"char"|"const"|"continue"|"auto"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"register"|"inline"|"int"|"long"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Imaginary"|"_Bool"|"_Complex"
ALPHA [_a-zA-Z]
IDENTIFIERS {ALPHA}({ALPHA}|[0-9])*
NONZDIGITS [1-9]
DIGITS [0-9]
INTEGER_CONSTANTS [-]?({DIGITS})+
DIGIT_SEQUENCE ({DIGITS})+
FRACTIONAL_CONSTANT {DIGIT_SEQUENCE}?\.{DIGIT_SEQUENCE}|{DIGIT_SEQUENCE}\.
EXPO_PART [Ee][-+]?{DIGIT_SEQUENCE}
FLOAT_CONSTANTS {FRACTIONAL_CONSTANT}{EXPO_PART}?|{DIGIT_SEQUENCE}{EXPO_PART}
ENUM_CONST {IDENTIFIERS}
C_CHAR \\[abnrtv"'?\\]
CHAR_CONST "'"({C_CHAR})+"'"
S_CHAR \\[abnrtv"'?\\]
STR_CONST """({S_CHAR})+"""
PUNC_CLASS "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"
SLCOMMENTS "//"[^/n]*/n
MLCOMMENTS "/*".*"*/"
SPACE [ \n\t\r]

%%

{KEYWORDS}          { return KEYWORDS ;}
{IDENTIFIERS}       {return IDENTIFIERS;}
{INTEGER_CONSTANTS}  {return INTEGER;}
{FLOAT_CONSTANSTS}   {return FLOAT;}
{ENUM_CONST}          {return ENUM;}
{CHAR_CONST}   {return CCHAR;}
{STR_CONST        }   {return SCHAR;}
{PUNC_CLASS       }   {return PUNCTUATORS;}
{SLCOMMENTS       }   {return SCMNT;}
{MLCOMMENTS       }   {return MLCMNT;}
{SPACE}         {}

%% 

int yywrap() {
    return 1;
}
