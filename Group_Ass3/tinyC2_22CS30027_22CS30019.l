%{
	#include "y.tab.h"
	extern void yyerror(char *);
	/*
		Group :- TinyC-67
		Golla Meghanandh Manvith Prabhash :- 22CS30027
		Darapu Adhithya  :- 22CS30019
	*/
%}



/* ______________________ DEFINITIONS OF REGULAR EXPRESSIONS _______________________ */



/*_______ COMMENTS ________*/

SINGLE_COMMENT 				[/][/].*
MULTILINE_START 			[/][\*]+
MULTILINE_END 				[\*]+[/]
MULTILINE_COMMENT 			({MULTILINE_START}(([^\*])|((\*)+[^/\*]))*{MULTILINE_END})

/*_______ IDENTIFIERS ________*/

DIGIT						[0-9]
ALPHABET					[a-zA-Z]|_
IDENTIFIER 					{ALPHABET}({ALPHABET}|{DIGIT})*

/*_______ CONSTANTS ________*/

DIGITS [0-9]
INTEGER ({DIGITS})+
DIGIT_SEQUENCE ({DIGITS})+
FRACTIONAL_CONSTANT {DIGIT_SEQUENCE}?\.{DIGIT_SEQUENCE}|{DIGIT_SEQUENCE}\.
EXPO_PART [Ee][-+]?{DIGIT_SEQUENCE}
FLOATING_CONSTANT {FRACTIONAL_CONSTANT}{EXPO_PART}?|{DIGIT_SEQUENCE}{EXPO_PART}

ENUMERATION_CONSTANT		{IDENTIFIER}
ESCAPE_SEQUENCE				\\['"?\\abfnrtv]
C_CHAR 						{ESCAPE_SEQUENCE}|[^("\'"|"\\"|"\n")]
C_CHAR_SEQUENCE				{C_CHAR}+
CHARACTER_CONSTANT			"\'"{C_CHAR_SEQUENCE}"\'"

/*_______ STRING LITERALS ________*/

S_CHAR						{ESCAPE_SEQUENCE}|[^("\""|"\\"|"\n")]
S_CHAR_SEQUENCE				{S_CHAR}+
STRING_LITERAL				"\""{S_CHAR_SEQUENCE}?"\""

/*_______ WHITE SPACE ________*/

WS							[ \t\v\n\f]




/* ______________________ RULES OF REGULAR EXPRESSIONS _______________________ */



%%

{SINGLE_COMMENT}			{}
{MULTILINE_COMMENT}			{}

"auto"						{return AUTO;}
"break"						{return BREAK;}
"case"						{return CASE;}
"char"						{return CHAR;}
"const"						{return CONST;}
"continue"					{return CONTINUE;}
"default"					{return DEFAULT;}
"do"						{return DO;}
"double"					{return DOUBLE;}
"else"						{return ELSE;}
"enum"						{return ENUM;}
"extern"					{return EXTERN;}
"register"					{return REGISTER;}
"float"						{return FLOAT;}
"for"						{return FOR;}
"goto"						{return GOTO;}
"if"						{return IF;}
"inline"					{return INLINE;}
"int"						{return INT;}
"long"						{return LONG;}
"restrict"					{return RESTRICT;}
"return"					{return RETURN;}
"short"						{return SHORT;}
"signed"					{return SIGNED;}
"sizeof"					{return SIZEOF;}
"static"					{return STATIC;}
"struct"					{return STRUCT;}
"switch"					{return SWITCH;}
"typedef"					{return TYPEDEF;}
"union"						{return UNION;}
"unsigned"					{return UNSIGNED;}
"void"						{return VOID;}
"volatile"					{return VOLATILE;}
"while"						{return WHILE;}
"_Bool"						{return BOOL;}
"_Complex"					{return COMPLEX;}
"_Imaginary"				{return IMAGINARY;}

{IDENTIFIER}				{return IDENTIFIER;}
{INTEGER}	        		{return INTEGER;}
{FLOATING_CONSTANT}	        {return FLOATING_CONSTANT;}
{CHARACTER_CONSTANT}        {return CHARACTER_CONSTANT;}
{STRING_LITERAL}            {return STRING_LITERAL;}


"["					{return SQUARE_BRACKET_OPEN;}
"]"					{return SQUARE_BRACKET_CLOSE;}
"("					{return ROUND_BRACKET_OPEN;}
")"					{return ROUND_BRACKET_CLOSE;}
"{"					{return CURLY_BRACKET_OPEN;}
"}"					{return CURLY_BRACKET_CLOSE;}
"."					{return DOT;}
"->"				{return IMPLIES;}
"++"				{return INCREMENT;}
"--"				{return DECREMENT;}
"&"					{return BITWISE_AND;}
"*"					{return MUL;}
"+"					{return PLUS;}
"-"					{return MINUS;}
"~"					{return BITWISE_NOT;}
"!"					{return NOT;}
"/"					{return DIV;}
"%"					{return MOD;}
"<<"				{return LEFT_SHIFT;}
">>"				{return RIGHT_SHIFT;}
"<"					{return LESS_THAN;}
">"					{return GREATER_THAN;}
"<="				{return LESS_EQUAL;}
">=" 				{return GREATER_EQUAL;}
"=="				{return EQUAL;}
"!="				{return NOT_EQUAL;}
"^"					{return BITWISE_XOR;}
"|"					{return BITWISE_OR;}
"&&"				{return AND;}
"||"				{return OR;}
"?"					{return QUESTION;}
":"					{return COLON;}
";"					{return SEMICOLON;}
"..."				{return ELLIPSIS;}
"="					{return ASSIGN;}
"*="				{return MUL_EQUAL;}
"/="				{return DIV_EQUAL;}
"%="				{return MOD_EQUAL;}
"+="				{return PLUS_EQUAL;}
"-="				{return MINUS_EQUAL;}
"<<="				{return SHIFT_LEFT_EQUAL;}
">>="				{return SHIFT_RIGHT_EQUAL;}
"&="				{return BITWISE_AND_EQUAL;}
"^="				{return BITWISE_XOR_EQUAL;}
"|="				{return BITWISE_OR_EQUAL;}
","					{return COMMA;}
"#" 				{return HASH;}

{WS}				{/* whitespace separates tokens */}


%%

int yywrap(void)
{
    return 1;
}