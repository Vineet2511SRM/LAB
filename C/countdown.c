#include <stdio.h>
#define MAX_DIM 60
#define MIN_DIM 0

int main()
{
    int n;

    while (1)
    {
        // Prompt the user to enter a number within the defined dimensions
        printf("Enter a number (in seconds) between %d and %d: ", MIN_DIM, MAX_DIM);

        // Check if the input is a valid integer
        if (scanf("%d", &n) != 1)
        {
            // If input is not a valid integer
            printf("Invalid input! Please enter a valid integer.\n");
            // Clear the input buffer to prevent an infinite loop of invalid input
            while (getchar() != '\n')
                ;
            continue; // Restart the loop and ask for input again
        }

        // Validate if the input is within the valid range
        if (n < MIN_DIM || n > MAX_DIM)
        {
            printf("Please enter a number between %d and %d.\n", MIN_DIM, MAX_DIM);
        }
        else
        {
            // Valid input, proceed with the countdown
            for (int count = n; count >= 0; count--)
            {
                printf("%d\n", count);
            }
            printf("Time up\n");
            break; // Exit the loop after successful countdown
        }
    }

    return 0;
}
