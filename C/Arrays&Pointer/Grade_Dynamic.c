#include <stdio.h>
#include <stdlib.h>  // For malloc() and free()

int main() {
    int n;
    float *grades;  // Pointer to hold the array of student grades
    
    // Step 2: Prompt the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    // Step 3: Dynamically allocate memory for n floats
    grades = (float*) malloc(n * sizeof(float));
    
    // Check if memory allocation was successful
    if (grades == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit the program if malloc fails
    }
    
    // Step 4: Input student grades
    printf("Enter the grades for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter the grades for student %d: ", i+1);
        scanf("%f", grades + i);  // Using pointer arithmetic (grades + i) to store values
    }

    // Step 5: Bubble sort to sort the grades (using pointers)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(grades + j) > *(grades + j + 1)) {
                // Swap the grades using pointers
                float temp = *(grades + j);
                *(grades + j) = *(grades + j + 1);
                *(grades + j + 1) = temp;
            }
        }
    }

    // Step 6: Display the sorted grades
    printf("\nSorted grades:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", *(grades + i));  // Access grades using pointer arithmetic
    }
    printf("\n");

    // Step 7: Free the dynamically allocated memory
    free(grades);

    // Step 8: End the program
    return 0;
}
