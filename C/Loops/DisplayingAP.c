#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    //displaying odd ap
    for(int i = 4; i<=(3*n+1); i = i+3){
        printf("%d ", i);

    }
    return 0;
}