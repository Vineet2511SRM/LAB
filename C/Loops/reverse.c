#include<stdio.h>

int main(){

    int rev = 0;
    int last_digit;
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        last_digit = n%10;
        rev = rev*10+last_digit;
        n/=10;
    }
    printf("Reverse of the number %d is %d",n,rev);
    return 0;
}