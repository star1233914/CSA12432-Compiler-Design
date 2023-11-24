#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c, d, e;

    // Original expressions
    c = a * b + 2;
    d = a * b + 3;

    // Eliminate common subexpression
    int temp = a * b;
    c = temp + 2;
    d = temp + 3;

    // Print results
    printf("c = %d\n", c);
    printf("d = %d\n", d);

    return 0;
}
