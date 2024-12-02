#include<stdio.h>

int main(){
    int value,count = 0;
    printf("Enter a number: ");
    scanf("%d",&value);
    
    while(value!=0){
        value = value/10;
        count++;
    }
    printf("The number of digits are %d",count);
    return 0;
}