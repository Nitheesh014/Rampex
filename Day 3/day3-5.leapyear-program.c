int main() {
    int year;
    scanf("%d", &year);  // Read the year from input

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a Leap year\n");
    }

    return 0;
}
