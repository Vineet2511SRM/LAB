#include<stdio.h>
int add(int a,int b){
    return a+b;
}



int main(){
    int x;
    printf("Enter 1st number: ");
    scanf("%d",&x);
    int y;
    printf("Enter 2nd number: ");
    scanf("%d",&y);

    int sum = add(x,y);
    printf("Sum of 2 numbers is: %d ",sum);
    return 0;
}