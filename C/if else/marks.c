#include<stdio.h>

int main(){
    int p;
    printf("Enter percentage: ");
    scanf("%d",&p);
    // more than 80 --> A
    // more than 60 but less than 80--> B
    // more than 40 but less than 60 --> C
    // less than 40 -->F
    if(p>80){
        printf("A grade....\n");
    }
    else if(p>60 && p<=80){
        printf("B grade....\n");
    }
    else if(p>40 && p<60){
        printf("C grade....\n");
    }
    else{
        printf("F grade....\n");
    }
    return 0;
}