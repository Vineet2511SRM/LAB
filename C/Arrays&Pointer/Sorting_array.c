//PROGRAM TO PERFORM SELECTION SORT USING POINTERS AND STATIC ALLOCATION(Using Array) - Created by Vineet - RA2411030010042
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    char names[n][50];       // Array to store student names
    char *namePtrs[n];      // Array of pointers to hold the names
    char temp[50];           // Temporary storage for swapping

    // Input names
    for (int i = 0; i < n; i++) {
        printf("Name of %d student is: ", i + 1);
        scanf("%s", names[i]);
        namePtrs[i] = names[i];  // Initialize pointers to each name
    }

    // Bubble sort algorithm using pointers to sort names alphabetically
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare names using pointers
            if (strcmp(namePtrs[j], namePtrs[j + 1]) > 0) {
                // Swap pointers
                char *tempPtr = namePtrs[j];
                namePtrs[j] = namePtrs[j + 1];
                namePtrs[j + 1] = tempPtr;
            }
        }
    }

    // Output sorted names
    printf("\nSorted names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", namePtrs[i]);
    }

    return 0;
}
