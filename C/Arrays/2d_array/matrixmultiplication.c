#include<stdio.h>

int main(){
    int A[2][2],B[2][2];
    int C[2][2] = {{0,0},{0,0}};
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("B[%d][%d]: ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
        
    printf("\n");
   
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                C[i][j]+= A[i][k]*B[k][j];
                

            }
            printf("C[%d][%d]: %d  ",i,j,C[i][j]);

        }
        printf("\n");
    }
    

 
return 0;
}


