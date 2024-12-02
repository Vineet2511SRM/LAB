#include <stdio.h>

int main()
{
    char arr[] = {'H', 'E', 'L', 'L', 'O'};
    char ch = '\0'; // null character
    int x = 0;
    char a = (char)x; // a-> '\0'
    // printf("%c",a);
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c ", arr[i]);
        i++;
    }
    return 0;
}
