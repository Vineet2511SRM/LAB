#include<stdio.h>

int main(){
    int arr[7];
     for(int i=0; i<7; i++){
        printf("Enter %d element \n",i+1);
        scanf("%d",&arr[i]);
    }
    //reverse 1-4
    for(int i=1,j=4;i<=j; i++,j--){
       int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}