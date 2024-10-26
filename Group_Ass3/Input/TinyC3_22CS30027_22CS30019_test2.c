#include <stdio.h>

// Function to swap values using pointers
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function to compute the sum of an array using pointers
int array_sum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);  // Dereference pointer to access array elements
    }
    return sum;
}

int main() {
    int a = 10, b = 20;
    int values[5] = {1, 2, 3, 4, 5};
    int total;

    // Call function to swap values of 'a' and 'b' using pointers
    swap(&a, &b);

    // Call function to compute the sum of array elements using a pointer
    total = array_sum(values, 5);

    return total;
}
