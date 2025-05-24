#include <stdio.h>
int main() {
    float height_cm, height_m, height_in;

    printf("Enter your height in centimeters: ");
    scanf("%f", &height_cm);

    height_m = height_cm / 100;
    height_in = height_cm / 2.54;

    printf("Your height:\n");
    printf("%.2f cm\n", height_cm);
    printf("%.2f meters\n", height_m);
    printf("%.2f inches\n", height_in);

    return 0;
}
