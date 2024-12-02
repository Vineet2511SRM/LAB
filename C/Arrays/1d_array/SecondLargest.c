#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[10] = {1, 28, 3, 4, 5, 16, 7, 28, 9, 10};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < 8; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    for (int j = 0; j < 8; j++)
    {
        if (arr[j] != max && smax < arr[j])
        {
            smax = arr[j];
        }
    }
    printf("%d\n", max);
    printf("%d\n", smax);
    return 0;
}