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
FRACTIONAL_CONSTANT {DIGIT_SEQUENCE}?/.
FLOAT_CONSTANSTS ()+


%%



%% 

int yywrap() {
    return 1;
}
