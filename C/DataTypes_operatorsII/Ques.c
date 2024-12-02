#include <stdio.h>

int main() {
    int number, result;

    // Step 1: Read the integer from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Step 2: Add 10 to the number
    result = number + 10;

    // Step 3: Multiply the result by 2
    result = result * 2;

    // Step 4: Subtract 5 from the result
    result = result - 5;

    // Step 5: Divide the result by 3 (integer division)
    result = result / 3;

    // Output the final result
    printf("The final result is: %d\n", result);

    return 0;
}
