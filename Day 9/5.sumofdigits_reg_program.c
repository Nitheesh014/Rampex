#include <stdio.h>
int sumOfDigits(int num) {
    if (num == 0)
        return 0; 
    else
        return (num % 10) + sumOfDigits(num / 10); // Recursive case
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }
    printf("Sum of digits: %d\n", sumOfDigits(num));
    return 0;
}
