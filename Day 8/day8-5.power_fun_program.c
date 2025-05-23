
#include <stdio.h>
int power(int base, int exponent) {
    int result = 1;

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int x, y;
    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (y): ");
    scanf("%d", &y);

    int result = power(x, y);
    printf("%d^%d = %d\n", x, y, result);

    return 0;
}
