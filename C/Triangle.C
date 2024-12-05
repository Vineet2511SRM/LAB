#include <stdio.h>

// Function to check if three sides can form a triangle
int is_valid_triangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// Function to prompt the user for a positive number and validate input
double get_positive_number() {
    double value;
    while (1) {
        printf("Enter a positive number: ");
        if (scanf("%lf", &value) != 1 || value <= 0) {
            printf("Invalid input. Please enter a positive number.\n");
            while (getchar() != '\n'); // Clear input buffer
        } else {
            return value;
        }
    }
}

// Main program loop
int main() {
    double side1, side2, side3;

    while (1) {
        printf("\nEnter the lengths of the three sides of a triangle:\n");
        side1 = get_positive_number();
        side2 = get_positive_number();
        side3 = get_positive_number();

        if (is_valid_triangle(side1, side2, side3)) {
            printf("\n Congratulations! These sides form a valid triangle.\n");
            break;
        } else {
            printf("\n Oopsies! These sides do not form a valid triangle. Please try again.\n");
        }
    }

    return 0;
}
