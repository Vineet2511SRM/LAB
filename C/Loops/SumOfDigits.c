#include<stdio.h>

int main(){

    int sum = 0;
    int last_digit;
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        last_digit = n%10;
        sum+=last_digit;
        n = n/10;
    }
    printf("The sum of digits is %d",sum);
    return 0;
}