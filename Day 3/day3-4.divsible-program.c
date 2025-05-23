int main() {
    int num;
    scanf("%d", &num);  // Read an integer from input

    if (num % 3 == 0) {
        printf("The number is divisible by 3\n");
    } else {
        printf("The number is not divisible by 3 and gives a remainder %d\n", num % 3);
    }

    return 0;
}
