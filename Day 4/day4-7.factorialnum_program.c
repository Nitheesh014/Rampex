#include <stdio.h>
int main() {
    int num, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    int i = 1;
    while(i <= num) {
        factorial *= i; 
        i++;             
    }
    printf("Factorial of %d is %d\n", num, factorial);
    return 0;
}
