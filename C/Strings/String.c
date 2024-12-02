#include <stdio.h>
#include <string.h>

int main()
{
    char str[40];
    //scanf("%s", str); //only first word will be considered 
    gets(str); //entire sentence can be input
    printf("Your input was: %s", str);
    return 0;
}