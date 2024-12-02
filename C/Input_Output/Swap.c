#include<stdio.h>

int main(){
    int a,b,s;
    printf("Enter the numbers: ");
    scanf("%d%d",&a,&b);
    printf("\n----Before swapping----");
    printf("\na = %d",a);
    printf("\nb = %d",b);

    s = a;
    a = b;
    b = s;
    printf("\n----After swapping----");
    printf("\na = %d",a);
    printf("\nb = %d",b);
    printf("\nSwap without using temporary variable:\n");
    printf("\n----Before Swap---- A=%d B=%d",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\n----After Swap---- A=%d B=%d",a,b);
    printf("\n******************PROGRAM ENDS********************");

    return 0;
}