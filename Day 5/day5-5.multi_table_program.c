#include <stdio.h>
int main() {
    int n, multiplicand;
    scanf("%d %d", &n, &multiplicand);
    for (int i = 1; i <= n; i++) {
        printf("%d * %d = %d\n", i, multiplicand, i * multiplicand);
    }
    return 0;
}