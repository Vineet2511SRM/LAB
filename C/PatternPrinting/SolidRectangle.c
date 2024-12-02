#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columns: ");
    scanf("%d",&m);
    
    for(int i=1;i<=n;i++){//outer loop signifies no of lines
        for(int j=1;j<=m;j++){//signifies no of stars in each line
         printf("*");
    }
    printf("\n");
    }
    return 0;
}