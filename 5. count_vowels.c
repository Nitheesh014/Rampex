#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int i, vowels = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    str[strcspn(str, "\n")] = 0;

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    printf("Number of vowels: %d\n", vowels);

    return 0;
}
