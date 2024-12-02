#include<stdio.h>
#include<string.h>
int main(){
    char reg_no[15];
    printf("Enter the values in reg_no: ");
    scanf("%s",&reg_no);
    
    
    int length = strlen(reg_no);  // Use strlen to calculate length
    printf("Size of the register no is: %d", length);
    return 0;
} 