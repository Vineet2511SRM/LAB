#include<stdio.h>

int main()
{
    int num1;
    printf("Enter first number: ");
    scanf("%d", &num1);
    int num2;
    printf("Enter second number: ");
    scanf("%d", &num2);
    int num3;
    printf("Enter third number: ");
    scanf("%d", &num3);
    if(num1>num2){
        if(num1>num3){
            printf("%d is greatest among all",num1);
        }
        else{//num1<num3 ->num2<num1<num3
            printf("%d is greatest among all",num3);
        }
        }
    else{
        if(num2>num3){
            printf("%d is greatest among all",num2);
        }
        else{ //num3>num2
            printf("%d is greatest among all",num3);
        }
        
    }


    return 0;
}