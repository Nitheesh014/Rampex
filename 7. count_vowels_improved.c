#include <stdio.h>
#include <ctype.h>     // For tolower()
#include <string.h>    // For strcspn()

int main() {
    char str[100];
    int i, vowel_count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowel_count++;
        }
    }

    printf("Number of vowels: %d\n", vowel_count);

    return 0;
}
