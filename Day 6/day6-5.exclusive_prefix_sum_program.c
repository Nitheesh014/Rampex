#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  

    int a[n];
    
    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int temp = a[i];
        a[i] = sum;
        sum += temp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
