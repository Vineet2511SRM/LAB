#include <stdio.h>
#include <stdbool.h>

void findDuplicates(int arr[], int size) {
    bool isDuplicate[size]; // Array to track duplicates
    for (int i = 0; i < size; i++) {
        isDuplicate[i] = false; // Initialize all elements as not visited
    }

    printf("Duplicate elements in the array are:\n");
    bool foundAnyDuplicate = false; // Flag to check if any duplicate exists

    for (int i = 0; i < size - 1; i++) {
        if (isDuplicate[i]) {
            continue; // Skip already processed elements
        }
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                if (!isDuplicate[j]) {
                    printf("%d\n", arr[i]);
                    isDuplicate[j] = true; // Mark as visited
                    foundAnyDuplicate = true;
                }
            }
        }
    }

    if (!foundAnyDuplicate) {
        printf("No duplicate elements found.\n");
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findDuplicates(arr, size);

    return 0;
}
