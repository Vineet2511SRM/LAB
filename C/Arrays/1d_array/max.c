#include<stdio.h>

int main(){
    int arr[7] = {1,4,2,8,19,5,12};
    int max = arr[0]; //sabse chota number
    for(int i=0;i<=7;i++){
        if(max<arr[i])
            max = arr[i];
    }
    printf("%d",max);
    return 0;
}