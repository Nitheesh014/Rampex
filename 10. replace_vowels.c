#include <stdio.h>
#include <ctype.h>  // for tolower()
#include <string.h> // for strcspn()

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            str[i] = '*';
        }
    }

    printf("String after replacing vowels: %s\n", str);

    return 0;
}
