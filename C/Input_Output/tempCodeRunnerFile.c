#include <stdio.h>
#include <string.h>

int main() {
    char tag[11];
    scanf("%s", tag);

    if (strlen(tag) != 9) {
        printf("Invalid Input\n");
    } else if (tag[3] == 'A' || tag[3] == 'E' || tag[3] == 'I' || tag[3] == 'O' || tag[3] == 'U') {
        printf("Arrest\n");
    } else {
        int is_valid = 1;
        for (int i = 0; i < 8; i += 2) {
            if ((tag[i] - '0' + tag[i + 1] - '0') % 2 != 0) {
                is_valid = 0;
                break;
            }
        }
        if (is_valid) {
            printf("Allowed\n");
        } else {
            printf("Invalid Input\n");
        }
    }

    return 0;
}