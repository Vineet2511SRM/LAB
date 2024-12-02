#include<stdio.h>
int main(){
    int a = 5;
    int *z = &a;
    printf("%p\n",z);
    printf("%d\n",*z);
    
    return 0;
    
}