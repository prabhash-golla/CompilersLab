/*
    Group :- TinyC-67
    Golla Meghanandh Manvith Prabhash :- 22CS30027
    Darapu Adhithya  :- 22CS30019
*/
extern int value;
static const double scp = 1.414;
auto b = 34;
volatile long y = 6540;
_Bool x = 1;
inline char toUpper(char ch)
{
    if(ch >= 97 && ch <= 122)
        ch -= 32;
    return ch;
}

int main()
{
    short signed int ssi = 5434;    
   
    char _1 = 48;
    char stp[2] = "";
    char str[] = "Test a string\\\"\'\n";

    int first = 20, second = 809;
    first++;
    first--;
    first = !second;
    first = ~second;
    first = first/second;
    first = first%second;
    first = first<<second;
    first = first>>second;
    first <<= second;
    first >>= second;
    first = first^second;
    first = first|second;
    first = (first) ? first : second;
    first ^= second;
    first |= second, second = 0;
    first = first&second;
    first = first*second;
    first = first+second;
    first = first-second;
    first *= second;
    first /= second;
    first %= second;
    first += second;
    first -= second;
    first &= second;

    int n = 10;
    do {
        n -= 1;
    } while (n > 1);

    for(int i = 0; (i < 3 && i >= 0) || (i > 100 && i != 101); i++) {
        if(i%5!=0) continue;
        else break;
    }

    float Pra = 23.E-2;
    float Pro = 23.56e+3;
    float Prb = .56E2;
    float Prc = 232e3;

    return 0;
}
