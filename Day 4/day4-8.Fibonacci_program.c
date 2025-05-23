#include <stdio.h>
int main() {
    int num, a = 0, b = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    printf("Fibonacci Series: ");
        if (num >= 1) {
        printf("%d ", a);
    }
    if (num >= 2) {
        printf("%d ", b);
    }
    int i = 3; 
    while(i <= num) {
        nextTerm = a + b;  
        printf("%d ", nextTerm);
        a = b;
        b = nextTerm;
        i++; 
    }
    printf("\n");
    return 0;
}
