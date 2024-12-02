#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows
    printf("Enter the building number (number of rows): ");
    scanf("%d",&rows);
    if(rows && rows>20){
        printf("Invalid\n");
        return 1;
    }

    // Loop to print the decoration layout
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            // Print '1' for the first and last columns and for the first and last rows
            if (j == 1 || j == i || i == 1 || i == rows) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
