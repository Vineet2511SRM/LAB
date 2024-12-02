#include<stdio.h>

int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    //to check whether the given input is even or odd
    if(n%2==0){
        printf("%d is an even number",n);
    }
    else{
        printf("%d is an odd number",n);

    }
    return 0;
}