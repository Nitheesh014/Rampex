#include <stdio.h>
int main() {
    int arr[] = {5, 3, 7, 1, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 7, found = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Element not found\n");
    return 0;
}
