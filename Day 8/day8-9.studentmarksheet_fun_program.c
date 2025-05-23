#include <stdio.h>

#define students 5
#define subjects 3

int main() {
    int marks[students][subjects];
    int i, j;
    int total[students];
    float average[students];

    // Input marks
    printf("Enter marks for %d students in %d subjects:\n", students, subjects);
    for (i = 0; i < students; i++) {
        printf("Student %d:\n", i + 1);
        total[i] = 0;
        for (j = 0; j < subjects; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
        }
        average[i] = (float)total[i] / subjects;
    }

    // Display mark sheet
    printf("\nMark Sheet:\n");
    printf("--------------------------------------------------\n");
    printf("Student\t");
    for (j = 0; j < subjects; j++) {
        printf("Sub%d\t", j + 1);
    }
    printf("Total\tAverage\n");
    printf("--------------------------------------------------\n");

    for (i = 0; i < students; i++) {
        printf("%d\t", i + 1);
        for (j = 0; j < subjects; j++) {
            printf("%d\t", marks[i][j]);
        }
        printf("%d\t%.2f\n", total[i], average[i]);
    }

    return 0;
}
