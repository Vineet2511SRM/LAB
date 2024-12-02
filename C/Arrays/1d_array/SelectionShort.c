#include<stdio.h> 

int main() {
    int n, temp, cmp;
    printf("Enter length of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array before sorting is: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sorting logic (Selection Sort)
    for(int sl = 0; sl < (n - 1); sl++) {
        for(cmp = sl + 1; cmp < n; cmp++) {
            if(arr[sl] > arr[cmp]) {
                temp = arr[sl];
                arr[sl] = arr[cmp];
                arr[cmp] = temp;
            }
        }
    }

    printf("Array after sorting is: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
