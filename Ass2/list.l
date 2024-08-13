%{
#define OB 1
#define CB 2
#define OP 3
#define NM 4
#define VR 5
#define OTH 6
#define NM1 7

int bra=0;
%}

space	[ \t\n]
spaces	{space}+
number [-]?[0-9]*
var [_a-zA-Z][_a-zA-Z0-9]*
%%

"(" {bra+=1 ; return OB ; }
")" {bra-=1 ; return CB ; }
"+"|"-"|"/"|"*"|"%" { return OP ;}
{number} {return (bra>0)? NM:NM1;}
{var} {return VR;}
{spaces} {}
"+="|"-="|"/="|"*="|"%="|"++"|"--"|"&&"|"||"|"=="|"!="|"<="|">="|"<<"|">>"|"&="|"|="|"^="|"->"|"::" {return OTH;}
. {return OTH;}
%% 

int yywrap() {
    return 1;
}
