#include<stdio.h>

int factorial(int x) {
    int fact = 1;
    for(int i = 2; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, r;
    
    // Input n and r values
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r); 

    // Check if n is greater than or equal to r
    if (n < r) {
        printf("Error: n should be greater than or equal to r.\n");
        return 1; // Exit program with error code
    }

    int nfact = factorial(n);     // n!
    int rfact = factorial(r);     // r!
    int nrfact = factorial(n - r); // (n-r)!

    int nCr = nfact / (rfact * nrfact);
    printf("%dC%d is %d\n", n, r, nCr);

    return 0;
}
