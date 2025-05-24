#include <stdio.h>
#include <string.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline if present
    name[strcspn(name, "\n")] = 0;

    printf("Hello, %s\n", name);
    printf("Your name has %lu characters.\n", strlen(name));

    return 0;
}
