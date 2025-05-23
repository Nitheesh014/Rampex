#include <stdio.h>
int power(int x, int y) {
    if (y == 0)
        return 1; 
    else
        return x * power(x, y - 1); 
}

int main() {
    int base, exponent;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);
    if (exponent < 0) {
        printf("This function does not support negative exponents.\n");
    } else {
        printf("%d^%d = %d\n", base, exponent, power(base, exponent));
    }
    return 0;
}
