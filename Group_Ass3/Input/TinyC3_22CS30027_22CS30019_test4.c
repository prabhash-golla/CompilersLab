// Recursive function to compute factorial

int factorial(int n) {
    if (n <= 1) return 1; // Base case
    return n * factorial(n - 1); // Recursive call
}

// Simple function to compute the sum of two integers
int sum(int x, int y) {
    return x + y;
}

int main() {
    int a = 5, b = 3;
    int result;

    // Call to recursive function factorial
    result = factorial(a);

    // Call to function with multiple parameters to compute the sum
    result = sum(result, b);

    return result;
}
