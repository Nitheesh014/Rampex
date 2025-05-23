#include <stdio.h>
int main() {
    int amount=100;
    int per= 10;
    int time=8;
    int intrest =amount+(amount*per/100);
    printf("%d",intrest*time);
    return 0;
}
