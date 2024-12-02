#include <stdio.h>

int factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}

int main()
{
    int z;
    printf("Enter an integer: ");
    scanf("%d", &z);
    int (*fun)(int);
    fun = &factorial;
    printf("%d\n", fun(z));
    int (*fun_swap)(int *, int *);
    fun_swap = Swap; // Pointing to Swap function

    int a, b;
    printf("Enter two numbers to swap:\n");
    printf("Number 1: ");
    scanf("%d", &a);
    printf("Number 2: ");
    scanf("%d", &b);
    printf("Before Swap: a = %d, b = %d\n", a, b);
    fun_swap(&a, &b);
    printf("After Swap: a = %d, b = %d\n", a, b);

    return 0;
}