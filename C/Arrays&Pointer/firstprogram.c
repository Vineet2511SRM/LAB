#include <stdio.h>

int main() {
    int arr[5];  // Declare an array of size 5
    int *ptr;    // Declare a pointer

    // Step 1: Input array elements from the user
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Step 2: Point the pointer to the first element of the array
    ptr = arr;  // Equivalent to ptr = &arr[0];

    // Step 3: Print the array elements using both array indexing and pointer arithmetic
    printf("\nAccessing array elements using array indexing:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\nAccessing array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        // Accessing elements using pointer arithmetic
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }

    // Step 4: Modify the array using pointers (double each element)
    printf("\nDoubling array elements using pointers:\n");
    for (int i = 0; i < 5; i++) {
        *(ptr + i) = *(ptr + i) * 2;  // Double each element
        printf("New value of arr[%d] = %d\n", i, *(ptr + i));
    }

    return 0;
}
