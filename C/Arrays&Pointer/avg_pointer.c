#include <stdio.h>

int main() {
    int marks[5];          // Declare an array to hold marks of 5 subjects
    int *ptr = marks;     // Declare a pointer and point it to the array
    int sum = 0;          // Variable to hold the sum of marks
    float average;        // Variable to hold the average

    // Step 1: Input marks from the user
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", (ptr + i)); // Use pointer to input marks
    }

    // Step 2: Calculate the sum of marks using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i); // Dereference pointer to get the value and add to sum
    }

    // Step 3: Calculate average
    average = sum / 5.0; // Use 5.0 to ensure floating-point division

    // Step 4: Display the average
    printf("\nThe average of the marks is: %.2f\n", average);

    return 0;
}
