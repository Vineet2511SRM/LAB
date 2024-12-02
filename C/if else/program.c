#include <stdio.h>

int main() {
    float num1, num2;
    int result;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Check for division by zero
    if (num2 == 0) {
        printf("Error! Division by zero is not allowed.\n");
    } else {
        // Perform the division and truncate the result towards zero
        result = (int)(num1 / num2);

        // Output the truncated result
        printf("The result after truncating towards zero is: %d\n", result);
    }

    return 0;
}
