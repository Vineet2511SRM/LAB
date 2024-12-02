#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    char names[n][50], temp[50];

    // Input names

    for (int i = 0; i < n; i++)
    {
        printf("Name of %d student is : ", i + 1);
        scanf("%s", names[i]);
    }

    // Bubble sort algorithm to sort names alphabetically
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                // Swap names[j] and names[j+1]
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    // Output sorted names
    printf("\nSorted names:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}
