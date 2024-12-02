#include<stdio.h>

int main(){
    int num,i,count = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i==0)
        {
            count+=1;
            
        }
    }
    if(count == 2 ){
        printf("%d is a prime number",num);
    }
    else{
        printf("%d is a composite number",num);
    }
    return 0;
}