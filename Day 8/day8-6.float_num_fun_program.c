
#include <stdio.h>
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float num1, num2;
    char operator;
   printf("Enter an expression (e.g., 5 + 3): ");
    scanf("%f %c %f", &num1, &operator, &num2);
    switch (operator) {
        case '+':
            printf("Result = %.2f\n", add(num1, num2));
            break;
        case '-':
            printf("Result = %.2f\n", subtract(num1, num2));
            break;
        case '*':
            printf("Result = %.2f\n", multiply(num1, num2));
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %.2f\n", divide(num1, num2));
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator. Use +, -, *, or /.\n");
    }
 return 0;
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
