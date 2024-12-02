#include<stdio.h>

int main() {
    int a = 1;  // true (non-zero)
    int b;

    // Applying logical NOT operator
    b = !a;

    // Display the result for a = 1
    printf("Original value of a: %d\n", a);
    printf("Inverted value using logical NOT: %d\n", b);

    // Change a to 0 (false)
    a = 0;

    // Applying logical NOT operator again
    b = !a;

    // Display the result for a = 0
    printf("Original value of a: %d\n", a);
    printf("Inverted value using logical NOT: %d\n", b);

    return 0;
}
