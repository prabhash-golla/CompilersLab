//check all the types of pointers

int main() 
{
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
    int array[3] ;
    array[0]=1;
    array[1]=2;
    array[2]=3;
    int *ptr = array; // ptr points to the beginning of array

    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += *ptr; 
    }

    int a1[10], a2[10][20], a3[5][10][15]; //1D,2D,3D Array 
    float *f1, **f2, ***f3;               //pointers to respective arrays


    // Pointer manipulication
    a1[5] = a2[1][2];
    a2[5][6] = a3[1][2][3];
    a3[0][0][0] = ***f3;
    ***f3 = **f2;
    **f2 = a2[9][19];
    *f1 = **f2;

    return sum;
}
