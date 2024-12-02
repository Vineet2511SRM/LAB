#include<stdio.h>

int main() {
    int num1, num2, choice;
    float result;

    // Displaying the menu
    printf("Select an operation to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Switch case for different operations
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result of Addition: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result of Subtraction: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result of Multiplication: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = (float)num1 / num2;
                printf("Result of Division: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
