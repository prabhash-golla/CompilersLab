//Handling of variable declarations, function definitions in ST
//Correct handling of operators, type checking and conversions

//Global Declaration:

float pi = 3.1415;
char nl = '\n';
int a[50];
float b[10][20];
int add,sub,mul,div,mod,and,or,xor,sl,sr,hw,to;
char *c = "TinyC-63";


int hellowworld(int i,float j)
{
    float area;
    area = pi * i * j;
    return pi;
}

int main()
{
    int p=27,q=19;
    add = p+q;
    sub = p-q;
    mul = p*q;
    div = p/q;
    mod = p%q;
    and = p&q;
    or = p|q;
    xor = p^q;
    sl = p << q;
    sr = p >> q;
    to = p > q ? p : q ; 
    hw = hellowworld(p,q);
    return 0;
}