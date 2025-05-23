#include <stdio.h>
int main() {
    int m1, m2, m3, m4, m5;
    printf("Enter 5 marks: ");
    scanf("%d", &m1);
    scanf("%d", &m2);
    scanf("%d", &m3);
    scanf("%d", &m4);
    scanf("%d", &m5);
    int sum = m1 + m2 + m3 + m4 + m5;
    float avg = sum / 5.0;
    printf("Sum = %d, Average = %.2f\n", sum, avg);
    if (avg >= 90 && avg <= 100) {
        printf("Grade: A\n");
    } else if (avg >= 80) {
        printf("Grade: B\n");
    } else if (avg >= 70) {
        printf("Grade: C\n");
    } else if (avg >= 60) {
        printf("Grade: D\n");}
    return 0;
}
