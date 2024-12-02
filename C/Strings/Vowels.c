#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, vowelCount = 0;

    // Input string from the user[P]
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets to read a line

    // Convert to uppercase and count vowels
    for (i = 0; str[i] != '\0'; i++)
    {
        // Convert to uppercase
        str[i] = toupper(str[i]);

        // Check for vowels
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')
        {
            vowelCount++;
        }
    }

    // Output results
    printf("Uppercase String: %s", str);
    printf("Number of Vowels: %d\n", vowelCount);

    return 0;
}
