#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    size_t length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string with spaces

    // Remove the newline character if it exists
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--; // Adjust length to exclude the newline
    }

    printf("Characters in the string:\n");
    for (size_t i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
        length++; // Increment length
    }

    printf("String length: %zu\n", length); // Use %zu for size_t
    return 0;
}
