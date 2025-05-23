#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  

    int a[n], total = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", total - a[i]);
    }

    return 0;
}
