int main() {
    int num;
    scanf("%d", &num);  // Read input from the user

    if (num > 0) {
        printf("Positive\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}
