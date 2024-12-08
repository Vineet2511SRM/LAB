#include <stdio.h>

// Function to sort three numbers in ascending order
void sortAscending(int *a, int *b, int *c) {
    int temp;

    // Compare and swap values to sort in ascending order
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
    if (*a > *c) { temp = *a; *a = *c; *c = temp; }
    if (*b > *c) { temp = *b; *b = *c; *c = temp; }
}

int main() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Call function to sort numbers
    sortAscending(&num1, &num2, &num3);

    // Display the sorted numbers
    printf("Sorted numbers in ascending order: %d %d %d\n", num1, num2, num3);

    return 0;
}
