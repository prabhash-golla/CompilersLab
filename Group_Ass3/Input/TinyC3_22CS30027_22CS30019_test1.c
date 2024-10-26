int main() {
    int x = 10, y = 20, z = 30;
    float f = 3.14;
    int result;

    // Perform nested arithmetic with type casting: multiply float with int, cast to int, and subtract from x
    result = x + (int)(f * y) - z;

    // Test mixed operators and precedence: includes arithmetic, bitwise and logical operators
    result = (x * y) / (z - x) + (x & y) - (y | z);

    return result;
}
