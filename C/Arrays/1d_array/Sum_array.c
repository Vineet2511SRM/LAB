#include <stdio.h>


int main() {
    int n;
    printf("Enter length of arr: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter no of elements in arr:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int sum = 0;
    
    for (int i = 0; i<n; i++) {
        sum += arr[i];
    }
    
    printf("Sum of array elements: %d\n", sum);
    
    return 0;
}
