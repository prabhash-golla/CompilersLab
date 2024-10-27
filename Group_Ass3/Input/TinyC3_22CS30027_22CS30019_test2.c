// Handling of variable declarations, function definitions, and the symbol table (ST)
// Correct handling of operators, type checking, and type conversions

// Global Declarations:
float pi = 3.1415; // Floating-point constant for pi
char nl = '\n'; // Character for newline
int a[50]; // Integer array of size 50
float b[10][20]; // 2D float array of size 10x20
// Variables to store results of different operations
int add, sub, mul, div, mod, and, or, xor, sl, sr, hw, to;
char *c = "TinyC-63"; // String constant assigned to character pointer

// Function Definition:
// 'hellowworld' calculates the area of an ellipse given two parameters and returns pi as an integer
int hellowworld(int i, float j)
{
    float area; // Local variable to store the calculated area
    area = pi * i * j; // Calculate area using pi and parameters i and j
    return pi; // Return pi (implicitly converted to integer type)
}

int main()
{
    // Local variable declarations
    int p = 27, q = 19; // Initialize integer variables p and q with values

    // Performing arithmetic operations
    add = p + q; // Addition of p and q
    sub = p - q; // Subtraction of p and q
    mul = p * q; // Multiplication of p and q
    div = p / q; // Integer division of p by q
    mod = p % q; // Modulus operation on p and q
    
    // Performing bitwise operations
    and = p & q; // Bitwise AND operation
    or = p | q; // Bitwise OR operation
    xor = p ^ q; // Bitwise XOR operation
    sl = p << q; // Bitwise left shift of p by q positions
    sr = p >> q; // Bitwise right shift of p by q positions
    
    // Ternary operator and function call
    to = p > q ? p : q; // Ternary operator: assigns greater of p and q to 'to'
    hw = hellowworld(p, q); // Call to function 'hellowworld' with p and q as arguments
    
    return 0; // Indicate successful execution of the program
}
