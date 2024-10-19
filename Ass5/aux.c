// Function to calculate the power of a number
// arg1: base number
// arg2: exponent
int pwr(int arg1, int arg2) 
{
    int t = 1;  // Initialize the result as 1
    // Loop arg2 times (decrement arg2 until it's 0)
    while (arg2--) 
    {
        t *= arg1;  // Multiply t by arg1 in each iteration
    }
    return t;  // Return the final result (arg1^arg2)
}

// Function to print the value of a specific index in memory (MEM)
// MEM: pointer to an array representing memory
// idx: index to access in MEM
void mprn(int* MEM, int idx) 
{
    // Print the value at MEM[idx]
    printf("+++ MEM[%d] set to %d\n", idx, *(MEM + idx));
}

// Function to print the result of a standalone expression stored in a register (R)
// R: pointer to an array representing registers
// idx: index of the evaluated expression in R
void eprn(int* R, int idx) 
{
    // Print the value at R[idx]
    printf("+++ Standalone expression evaluates to %d\n", *(R + idx));
}
