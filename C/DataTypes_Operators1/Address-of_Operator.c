#include <stdio.h>

int main() {
    int a;
    float b;
    char c;

    // User input
    printf("Enter an integer value: ");
    scanf("%d", &a);

    printf("Enter a float value: ");
    scanf("%f", &b);

    printf("Enter a character value: ");
    scanf(" %c", &c);  

    // Display the addresses of the variables using the address-of operator
    printf("\nAddress of integer variable: %p\n",&a);
    printf("Address of float variable: %p\n",&b);
    printf("Address of char variable: %p\n",&c);

    return 0;
}
