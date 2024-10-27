// Recursive function to compute factorial of an integer
int factorial(int n) {
    if (n <= 1) return 1; // Base case: factorial of 0 or 1 is 1
    return n * factorial(n - 1); // Recursive call: n * factorial of (n-1)
}

// Simple function to compute the sum of two integers
int sum(int x, int y) {
    return x + y; // Return the sum of x and y
}

int main() {
    int a = 5, b = 3; // Initialize variables a and b
    int result; // Variable to store results from function calls

    // Call to recursive function factorial
    result = factorial(a); // Compute factorial of a (5)

    // Call to sum function with multiple parameters
    result = sum(result, b); // Add the factorial result and b (3)

    return result; // Return the final result
}
