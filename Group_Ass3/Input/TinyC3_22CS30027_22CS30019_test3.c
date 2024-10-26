//Typecasting(implicit and explicit) and pointers
int main()
{
    int n=5;
    float b=8.5;
    int c=(int)b;
    float x=b*n;
    int y=(int)x;
    int z=n*b;
    int *p;
    p = &n;
    *p=10;
    return 0;
}