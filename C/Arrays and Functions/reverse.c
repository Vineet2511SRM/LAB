#include<stdio.h>

void reverse(int arr[]){
    int i=0;
    int j=6;
    while(i<j){
        //arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int arr[7] = {1,4,2,8,19,5,12};
    reverse(arr);
    for(int i = 0;i<7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}