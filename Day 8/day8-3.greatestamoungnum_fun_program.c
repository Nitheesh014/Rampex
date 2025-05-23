
#include <stdio.h>
int findGreatest(int a, int b, int c) {
    int greatest;

    if (a >= b && a >= c)
        greatest = a;
    else if (b >= a && b >= c)
        greatest = b;
    else
        greatest = c;

    return greatest;
}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int result = findGreatest(num1, num2, num3);
    printf("The greatest number is: %d\n", result);

    return 0;
}
