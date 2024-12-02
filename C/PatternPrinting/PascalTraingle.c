#include <stdio.h>
#include <ctype.h>

int main()
{
    int n, coef;
    char input[20];

    // Input loop to validate a positive integer
    do
    {
        printf("Enter a positive integer to generate Pascal's Triangle: ");
        if (fgets(input, sizeof(input), stdin) != NULL)
        {
            int valid = 1;
            for (int i = 0; input[i] != '\0' && input[i] != '\n'; i++)
            {
                if (!isdigit(input[i])) // Check for non-digit characters
                {
                    valid = 0;
                    break;
                }
            }

            if (valid)
            {
                sscanf(input, "%d", &n); // Convert string to integer
                if (n > 0)
                    break;
            }
        }
        printf("Invalid input. Please enter a positive integer.\n");
    } while (1);

    // Generate Pascal's Triangle
    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int space = 0; space < n - i - 1; space++)
        {
            printf(" ");
        }

        coef = 1; // First coefficient is always 1
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1); // Calculate the next coefficient
        }
        printf("\n");
    }

    return 0;
}
