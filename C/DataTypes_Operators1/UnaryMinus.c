#include<stdio.h>

int main() {
    int a;
    printf("Enter an integer : ");
    scanf("%d",&a);
    int b;

    // Applying unary minus operator
    b = -a;

    // Display the result
    printf("Original value of a : %d\n", a);
    printf("Negated value using unary minus : %d\n", b);

    return 0;
}
