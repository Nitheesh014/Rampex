#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isValidUsername(const char *username) {
    int len = strlen(username);

    if (len < 3 || len > 15) {
        return 0;
    }

    if (!isalpha(username[0])) {
        return 0;
    }

    for (int i = 1; i < len; i++) {
        if (!isalnum(username[i]) && username[i] != '_') {
            return 0;
        }
    }

    return 1;
}

int main() {
    char username[100];

    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0'; 

    if (isValidUsername(username)) {
        printf("Valid username.\n");
    } else {
        printf("Invalid username.\n");
    }

    return 0;
}
