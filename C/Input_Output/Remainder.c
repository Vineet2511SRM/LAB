#include<stdio.h>

int main(){
    int a,b,remainder,q; //a>b
    printf("Enter dividend: ");
    scanf("%d",&a);
    printf("Enter divisor: ");
    scanf("%d",&b);
    q = a/b;
    remainder = a-(b*q);
    printf("Remainder when %d is divided by %d is : %d",a,b,remainder);
    return 0;
}