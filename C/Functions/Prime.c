#include <stdio.h>

// Function to check if a number is prime
int isPrime(int number) {
    if (number <= 1) return 0; // Numbers <= 1 are not prime

    for (int i = 2; i < number; i++) {
        if (number % i == 0) return 0; // Not prime if divisible
    }
    return 1; // Prime
}

int main() {
    int num;

    // Input a number
    printf("Enter a positive number: ");
    scanf("%d", &num);

    // Check and display result
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
