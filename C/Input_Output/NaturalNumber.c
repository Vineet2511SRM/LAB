#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("Enter nth number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d",sum);
    return 0;

}