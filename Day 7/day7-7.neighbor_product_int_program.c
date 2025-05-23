#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n], result[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    result[0] = a[0] * a[1];
    for (int i = 1; i < n - 1; i++) {
        result[i] = a[i - 1] * a[i + 1];
    }
    result[n - 1] = a[n - 2] * a[n - 1];
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}
