#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to search for an element in a 2D array
int searchElement(int arr[ROWS][COLS], int target) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] == target) {
                return 1;  // Element found
            }
        }
    }
    return 0;  // Element not found
}

int main() {
    int arr[ROWS][COLS];
    int target;

    printf("Enter elements of a %dx%d array:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    if (searchElement(arr, target)) {
        printf("Element %d found in the array.\n", target);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
