#include <stdio.h>

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;

    // Input
    printf("Enter two numbers to swap:\n");
    printf("Number 1: ");
    scanf("%d", &a);
    printf("Number 2: ");
    scanf("%d", &b);

    // Display before swap
    printf("\nBefore Swapping\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swap function call
    Swap(&a, &b);

    // Display after swap
    printf("\nAfter Swapping\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    

    return 0;
}
