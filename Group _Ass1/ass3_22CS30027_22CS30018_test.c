#include<stdio.h>
/*
    Group :- TinyC-67
    Golla Meghanandh Manvith Prabhash :- 22CS30027
    Darapu Adhithya  :- 22CS30018
*/
int main()
{
    int x = -10;           //INTEGER
    float y = 3.1415;      //FLOAT
    char c = 'P';          //CHAR
    char d = '\n';
    char e = '\"';
    char f = '\'';
    enum months {JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC}; //ENUMERATION
    char g[20] = "TinyC-67"; //STRING
    char h[20] = "\'\"\?\\\a\b\f\n\r\t\v"; //SPEACIAL CASE
    while(x<0)
    {
        x++;
    }
    if(x==0)
    {
        y*=5;
    }
    else
    {
        c='B';
    }
    return 0;
}