#include <stdio.h>

int main() {
    int a,b;
    printf("Enter first integer: ");
    scanf("%d",&a);
    printf("Enter second integer: ");
    scanf("%d",&b);

    // Bitiwse AND
    int and_result = a & b; 
    printf("Bitwise AND: %d & %d = %d\n", a, b, and_result);

    // Bitwise OR
    int or_result = a | b;   
    printf("Bitwise OR: %d | %d = %d\n", a, b, or_result);

    // Bitwise XOR
    int xor_result = a ^ b;  
    printf("Bitwise XOR: %d ^ %d = %d\n", a, b, xor_result);

   

    return 0;
}
