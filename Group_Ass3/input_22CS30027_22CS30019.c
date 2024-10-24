// Declarations (variables, pointers, 1D array, 2D array, functions) and arithmetic operations

// Global declarations
float d = 2.3;
char c;	
int e, f, g, h, i, j, k;
float l, m, n, o, p;
int w[10];                      
float f[20][50];                
int a = 4, *p, b;               

int func (int i, float d) {
    d = 2.3;
    d = (float)i;
    d = d/2.3;
    d = d*2.3;
    d = d+w[2];
    return i;
}

int main () {
    int p = 120;
    int q = 17;
    char ch = 'c', d = 'a'; 
    i = p + q;
    j = p - q;
    k = p * q;
    l = p / q;
    m = p % q;
    n = p & q;
    o = p | q;
    q = i << 2;
    p = i >> 1;
    func(i, i);
    return 0;
}
