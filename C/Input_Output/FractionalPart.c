#include<stdio.h>

int main(){
    float x;
    printf("Enter a decimal number: ");
    scanf("%f",&x);
    int y;
    y = x;
    float z = x-y;
    printf("Fractional part of %f is %f: ",x,z);
    return 0;
}