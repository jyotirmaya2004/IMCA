#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    void *vptr = arr;  // Void pointer

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(int *)(vptr + i * sizeof(int)));  // Output: 10 20 30 40 50
    }
    return 0;
}