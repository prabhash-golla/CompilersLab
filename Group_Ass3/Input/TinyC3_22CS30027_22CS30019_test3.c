// Function call with array pointers and if-else statements

// Function to calculate the sum of elements in an integer array
int ADDER(int a[], int n)
{
    int sum = 0; // Variable to store the cumulative sum
    
    // Loop through each element of the array and add to sum
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i]; // Accumulate each array element into sum
    }
    return sum; // Return the total sum of elements
}

int main()
{
    int n = 10; // Set the size of the array
    int a[n]; // Declare an integer array of size 'n'
    int ans; // Variable to store result of conditional checks

    // Call the ADDER function, passing array 'a' and its size 'n'
    int sum = ADDER(a, n);

    // If-else conditions to evaluate sum relative to 'n'
    if (sum == n) // If the sum equals 'n'
    {
        ans = 0; // Set ans to 0
    }
    else if (sum > n) // If the sum is greater than 'n'
    {
        ans = sum - n; // Set ans to the difference (sum - n)
    }
    else // If the sum is less than 'n'
    {
        ans = 1; // Set ans to 1
    }
    
    return 0; // End of program, returning success status
}
