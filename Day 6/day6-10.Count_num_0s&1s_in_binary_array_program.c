#include <stdio.h>

int main() {
    int n, zero_count = 0, one_count = 0;
    scanf("%d", &n);  

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] == 0)
            zero_count++;
        else if (a[i] == 1)
            one_count++;
    }

    printf("zc = %d\n", zero_count);
    printf("oc = %d\n", one_count);

    return 0;
}
