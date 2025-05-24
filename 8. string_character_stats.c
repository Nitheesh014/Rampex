#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int i;
    int vowel_count = 0, space_count = 0;
    int uppercase_count = 0, lowercase_count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (strchr("aeiouAEIOU", ch)) {
            vowel_count++;
        }

        if (ch == ' ') {
            space_count++;
        }

        if (isupper(ch)) {
            uppercase_count++;
        } else if (islower(ch)) {
            lowercase_count++;
        }
    }
    printf("\nStatistics:\n");
    printf("Vowels: %d\n", vowel_count);
    printf("Spaces: %d\n", space_count);
    printf("Uppercase letters: %d\n", uppercase_count);
    printf("Lowercase letters: %d\n", lowercase_count);

    return 0;
}
