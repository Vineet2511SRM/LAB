#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
    
}


int main() {
    int num, temp, sum = 0, digit;
    
    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // Store the original number

    // Calculate the sum of factorials of digits
    while (temp > 0) {
        digit = temp % 10;          // Extract last digit
        sum += factorial(digit);    // Add factorial of digit to sum
        temp /= 10;                 // Remove last digit
    }

    // Check if the sum of factorials is equal to the original number
    if (sum == num) {
        printf("%d is a Strong number.\n", num);
    } else {
        printf("%d is not a Strong number.\n", num);
    }

    return 0;
}

    
