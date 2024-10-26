#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int *p1, *p2;

    // Initialize pointers
    p1 = &a;          // p1 points to a
    p2 = &b;          // p2 points to b

    // Pointer dereferencing and value swapping
    int temp = *p1;   // temp gets the value at p1 (i.e., a's value)
    *p1 = *p2;        // the value at p1 is set to the value at p2 (b's value)
    *p2 = temp;       // the value at p2 is set to temp (initial value of a)

    // Pointer arithmetic
    int array[3] = {1, 2, 3};
    int *ptr = array; // ptr points to the beginning of array

    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += *(ptr + i); // Access each element by incrementing pointer
    }

    return sum;
}
