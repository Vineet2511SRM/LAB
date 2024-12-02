#include <stdio.h>

#define ROWS1 2
#define COLS1 3
#define ROWS2 3
#define COLS2 2

// Function to multiply two matrices
void multiplyMatrices(int mat1[ROWS1][COLS1], int mat2[ROWS2][COLS2], int result[ROWS1][COLS2]) {
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[ROWS1][COLS1];
    int mat2[ROWS2][COLS2];
    int result[ROWS1][COLS2];

    printf("Enter elements of matrix 1 (%dx%d):\n", ROWS1, COLS1);
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of matrix 2 (%dx%d):\n", ROWS2, COLS2);
    for (int i = 0; i < ROWS2; i++) {
        for (int j = 0; j < COLS2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    multiplyMatrices(mat1, mat2, result);

    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
