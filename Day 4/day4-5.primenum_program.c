#include <stdio.h>
int main() {
    int num, i = 2, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 2) {
        isPrime = 0;
    }
    while(i <= num / 2) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
