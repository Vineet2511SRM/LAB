#include <stdio.h>

int is_armstrong(int);

int main() {
    int start, end;

    // Input range with constraints in a single loop
    do {
        printf("Enter the starting number (0 to 50): ");
        scanf("%d", &start);
        printf("Enter the ending number (0 to 1000): ");
        scanf("%d", &end);

        if (start < 0 || start > 50 || end < 0 || end > 1000 || start > end) {
            printf("Invalid range. Please enter a valid starting and ending number.\n");
        }
    } while (start < 0 || start > 50 || end < 0 || end > 1000 || start > end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    // Loop through the range and check for Armstrong numbers
    for (int i = start; i <= end; i++) {
        if (is_armstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

// Function to check if a number is an Armstrong number
int is_armstrong(int num) {
    int sum = 0, temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return sum == num;
}
