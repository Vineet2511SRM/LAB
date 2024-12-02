#include<stdio.h>

int main(){
    int x;
    printf("Enter first number..... : ");
    scanf("%d",&x);
    int y;
    printf("Enter second number..... : ");
    scanf("%d",&y);
    //Addition
    int a = x+y;
    printf("Addition of %d and %d is : %d\n",x,y,a);
    //Subtraction
    int s = x-y;
    printf("Difference of %d and %d is : %d\n",x,y,s);
    //Multiplication
    int m = x*y;
    printf("Multiplication of %d and %d is : %d\n",x,y,m);
    //Division
    
    if(y==0){
        printf("Division by zero is invalid!!!....please enter a non zero number.....");
        
    }
    else{
        int d = (x/y);
        
        printf("%d divided by %d gives result : %d\n",x,y,d);
    }
    //Remainder or Use of modulus operator
    int r = x%y;
    printf("Remainder when %d divided by %d is : %d",x,y,r);
    
    


    return 0;
}
