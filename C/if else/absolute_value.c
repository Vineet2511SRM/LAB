#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n<0)
    {
        n*=-1;
    }
    printf("The absolute value of given number is : %d",n);
    
    return 0;
}