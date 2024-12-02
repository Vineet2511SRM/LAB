#include<stdio.h>
#include<math.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("The square root is : ");
    float root = sqrt(a);
    printf("%.2f",root);
    return 0;
}