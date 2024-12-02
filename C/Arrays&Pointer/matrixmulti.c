#include <stdio.h>

int main() {
    int n; // Size of the matrices
    int A[10][10], B[10][10], C[10][10]; // Static memory allocation for matrices

   
    printf("Enter the size of the matrices (n x n): ");
    scanf("%d", &n);

    
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);  // Input directly into matrix A
        }
    }

    
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);  
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(*(C + i) + j) = 0; // Initialize the element to 0
        }
    }

    // Step 5: Multiply matrices A and B, store result in C
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                // Correct multiplication and accumulation
                *(*(C + i) + j) += *(*(A + i) + k) * *(*(B + k) + j);
            }
        }
    }

    // Step 6: Display the result matrix C
    printf("\nResult Matrix C (A x B):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *(*(C + i) + j));  // Print using pointer arithmetic
        }
        printf("\n");
    }

    return 0; // End the program
}
