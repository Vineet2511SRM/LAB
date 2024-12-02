#include<stdio.h>

int main(){
    int arr[7] = {1,4,2,8,19,5,12};
    int brr[7];
    for(int i=0;i<7;i++){
        brr[i] = arr[6-i];
    }
    for(int i=0;i<7;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}