#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *arr[] = {&a, &b, &c};  // Array of pointers
    int **ptr = arr;  // Pointer to the first element

    for (int i = 0; i < 3; i++) {
        printf("%d ", **(ptr + i));  // Output: 10 20 30
    }
    return 0;
}