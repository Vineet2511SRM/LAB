#include <stdio.h>

int main() {
    int a = 6, b = 12, c;

    // Pre-increment
    c = ++a;
    printf("After pre-increment, a = %d, c = %d\n", a, c);

    // Post-increment
    c = b++;
    printf("After post-increment, b = %d, c = %d\n", b, c);

    // Pre-decrement
    c = --a;
    printf("After pre-decrement, a = %d, c = %d\n", a, c);

    // Post-decrement
    c = b--;
    printf("After post-decrement, b = %d, c = %d\n", b, c);

    return 0;
}
