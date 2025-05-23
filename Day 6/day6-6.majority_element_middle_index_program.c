#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int candidate = arr[n / 2];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }

    if (count > n / 2) {
        printf("The majority element is : %d\n", candidate);
    } else {
        printf("No majority element found in the array\n");
    }

    return 0;
}
