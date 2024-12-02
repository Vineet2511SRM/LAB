#include <stdio.h>
#include <stdlib.h>  // For malloc() and free()

int main() {
    int rowsA, colsA, rowsB, colsB; // Dimensions of the matrices
    int **A, **B, **C; // Pointers to hold the matrices

    
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &rowsA, &colsA);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    
    if (colsA != rowsB) {
        printf("Matrix multiplication not possible! The number of columns in Matrix A must equal the number of rows in Matrix B.\n");
        return 1; // Exit if multiplication is not possible
    }

   
    A = (int **)malloc(rowsA * sizeof(int *));
    B = (int **)malloc(rowsB * sizeof(int *));
    C = (int **)malloc(rowsA * sizeof(int *));
    
    for (int i = 0; i < rowsA; i++)
        A[i] = (int *)malloc(colsA * sizeof(int));
    
    for (int i = 0; i < rowsB; i++)
        B[i] = (int *)malloc(colsB * sizeof(int));

    for (int i = 0; i < rowsA; i++)
        C[i] = (int *)malloc(colsB * sizeof(int));

    
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);  // Input using pointers
        }
    }

    
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);  // Input using pointers
        }
    }

    
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
             *(*(C + i) + j) = 0; // Initialize the element to 0; // Initialize C[i][j] to 0
            for (int k = 0; k < colsA; k++) {
               *(*(C + i) + j) += *(*(A + i) + k) * *(*(B + k) + j); // Multiply and accumulate
            }
        }
    }

   
    printf("\nResult Matrix C (A x B):\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d ", *(*(C + i) + j)); // Print using pointers
        }
        printf("\n");
    }

    
    for (int i = 0; i < rowsA; i++)
        free(A[i]);
    for (int i = 0; i < rowsB; i++)
        free(B[i]);
    for (int i = 0; i < rowsA; i++)
        free(C[i]);
    
    free(A); // Free the base pointers
    free(B);
    free(C);

    return 0; // End the program
}
