#include <stdio.h>

int main() {
    int arr[10];         // Declare an array of size 10
    int *ptr = arr;     // Declare a pointer and point it to the array
    int max, min;       // Variables to hold maximum and minimum values

    // Step 1: Input array elements from the user
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", ptr + i);  // Using pointer arithmetic to input values
    }

    // Step 2: Initialize max and min with the first element
    max = min = *ptr;

    // Step 3: Find the maximum and minimum values using pointers
    for (int i = 1; i < 5; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);  // Update max
        }
        if (*(ptr + i) < min) {
            min = *(ptr + i);  // Update min
        }
    }

    // Step 4: Display the results
    printf("\nMaximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;  // End the program
}
