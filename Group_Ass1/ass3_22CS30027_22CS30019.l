%{
/*
    Group :- TinyC-67
    Golla Meghanandh Manvith Prabhash :- 22CS30027
    Darapu Adhithya  :- 22CS30019
*/

#define KEYWORDS 1
#define IDENTIFIERS 2
#define INTEGER 3
#define FLOAT    4
#define ENUM     5
#define CCHAR   6
#define SCHAR   7
#define PUNCTUATORS 8
#define SCMNT   9
#define MLCMNT   10
#define OTHERS 11

%}

KEYWORDS "break"|"case"|"char"|"const"|"continue"|"auto"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"register"|"inline"|"int"|"long"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Imaginary"|"_Bool"|"_Complex"
ALPHA [_a-zA-Z]
IDENTIFIERS {ALPHA}({ALPHA}|[0-9])*
DIGITS [0-9]
INTEGER_CONSTANTS ({DIGITS})+
DIGIT_SEQUENCE ({DIGITS})+
FRACTIONAL_CONSTANT {DIGIT_SEQUENCE}?\.{DIGIT_SEQUENCE}|{DIGIT_SEQUENCE}\.
EXPO_PART [Ee][-+]?{DIGIT_SEQUENCE}
FLOAT_CONSTANTS {FRACTIONAL_CONSTANT}{EXPO_PART}?|{DIGIT_SEQUENCE}{EXPO_PART}
ENUM_CONST {IDENTIFIERS}
ESCAPE_CHAR \\[abfnrtv\\?"']
C_CHAR [^'\\\n]|{ESCAPE_CHAR}
CHAR_CONST "'"({C_CHAR})+"'"
S_CHAR [^"\\\n]|{ESCAPE_CHAR}
STR_CONST \"(({S_CHAR})+)\"
PUNC_CLASS "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"
SLCOMMENTS "//"[^\n]*
MLCOMMENTS "/*"([^*]|"*"[^/])*"*/"
SPACE [ \n\t\r]

%s enumerator

%%

"enum"                                   {BEGIN(enumerator);return KEYWORDS;}
<enumerator>"{"                          {return PUNCTUATORS;}
<enumerator>{ENUM_CONST}                 {return ENUM;}
<enumerator>","                          {return PUNCTUATORS;}
<enumerator>"}"                          {BEGIN(INITIAL);return PUNCTUATORS;}

{KEYWORDS}                               {return KEYWORDS ;}
{IDENTIFIERS}                            {return IDENTIFIERS;}
{INTEGER_CONSTANTS}                      {return INTEGER;}
{FLOAT_CONSTANTS}                        {return FLOAT;}
{CHAR_CONST}                             {return CCHAR;}
{STR_CONST}                              {return SCHAR;}
{PUNC_CLASS}                             {return PUNCTUATORS;}
{SLCOMMENTS}                             {return SCMNT;}
{MLCOMMENTS}                             {return MLCMNT;}
{SPACE}                                  {}
.                                        {return OTHERS;}
                    
                    

%% 

int yywrap() {
    return 1;
}
