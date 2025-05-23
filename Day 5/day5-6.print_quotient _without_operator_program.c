#include <stdio.h>
int main() {
    int dividend, divisor, quotient = 0;
    scanf("%d %d", &dividend, &divisor);
    if (divisor == 0) {
        printf("Error! Division by zero.\n");
        return 1;
    }
    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }
    printf("%d\n", quotient);

    return 0;
}