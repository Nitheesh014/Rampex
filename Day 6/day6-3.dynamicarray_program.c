#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int include = 0, exclude = 0, new_exclude;

    for (int i = 0; i < n; i++) {
        new_exclude = (include > exclude) ? include : exclude;
        include = exclude + a[i];
        exclude = new_exclude;
    }

    int max = (include > exclude) ? include : exclude;
    printf("%d\n", max);

    return 0;
}
