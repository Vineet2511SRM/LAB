#include <stdio.h>

int main() {
    int a, b;
    
    // Take input from the user
    printf("Enter value for a (0 or any_number): ");
    scanf("%d", &a);
    
    printf("Enter value for b (0 or any_number): ");
    scanf("%d", &b);
    
    // Logical AND (&&)
    if (a && b)
        printf("Logical AND: a && b is true (1)\n");
    else
        printf("Logical AND: a && b is false (0)\n");
    
    // Logical OR (||)
    if (a || b)
        printf("Logical OR: a || b is true (1)\n");
    else
        printf("Logical OR: a || b is false (0)\n");
    
    // Logical NOT (!)
    printf("Logical NOT: !a is %d\n", !a);
    printf("Logical NOT: !b is %d\n", !b);

    return 0;
}
