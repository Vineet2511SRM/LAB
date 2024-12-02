#include <stdio.h>

int main() {
    int T, N, C, i, A[101], sum;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &N, &C);

        // Check for invalid input
        if (N < 0 || N > 100 || C < 0 || C > 110) {
            printf("Invalid Input\n");
            continue;
        }

        for (i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            // Check for invalid desired candies
            if (A[i] < 0 || A[i] > C) {
                printf("Invalid Input\n");
                continue;
            }
            sum += A[i];
        }

        if (sum <= C) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}