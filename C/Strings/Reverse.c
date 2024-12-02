#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if it exists
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--; // Adjust length to exclude the newline
    }

    printf("The size of str is: %zu\n", len);

    // Reverse the string
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("The reversed string is: ");
    puts(str);

    return 0;
}
