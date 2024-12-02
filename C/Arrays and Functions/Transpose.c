#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to calculate the transpose of a matrix
void transposeMatrix(int arr[ROWS][COLS], int result[COLS][ROWS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            result[j][i] = arr[i][j];
        }
    }
}

int main()
{
    int arr[ROWS][COLS];
    int result[COLS][ROWS];

    printf("Enter elements of a %dx%d matrix:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Original matrix is : \n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    transposeMatrix(arr, result);

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
