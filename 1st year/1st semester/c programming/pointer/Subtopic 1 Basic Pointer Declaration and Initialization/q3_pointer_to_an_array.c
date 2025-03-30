#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Pointer to the first element

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));  // Output: 10 20 30 40 50
    }
    return 0;
}