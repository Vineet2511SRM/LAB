#include <stdio.h>

int main() {
    int n;
    printf("Enter a position (n) to find the Fibonacci number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } 
    else if (n == 1) {
        printf("The 1st Fibonacci number is 0\n");
    } 
    else if (n == 2) {
        printf("The 2nd Fibonacci number is 1\n");
    } 
    else {
        int a = 0, b = 1, sum = 0;
        for (int i = 3; i <= n; i++) { // Start loop from 3 because 1 and 2 are handled already
            sum = a + b;
            a = b;
            b = sum;
        }
        printf("The %dth Fibonacci number is %d\n", n, sum);
    }
    return 0;
}
