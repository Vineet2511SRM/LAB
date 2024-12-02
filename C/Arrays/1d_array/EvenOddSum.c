#include<stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sumEven = 0;
    int sumOdd = 0;
    for(int i=0;i<10;i++){
        if(i%2==0)
            sumEven+=arr[i];
        else
            sumOdd+=arr[i];
    }
    int res = sumEven - sumOdd;
    printf("%d",res);
    return 0;
}