#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome (case-insensitive)
int isPalindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        // Convert characters to lowercase for comparison
        if (tolower(str[i]) != tolower(str[len - i - 1])) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove newline character

    // Check and display results
    if (isPalindrome(str)) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    printf("Length of the string is: %zu\n", strlen(str));  // Use %zu for size_t

    return 0;
}
