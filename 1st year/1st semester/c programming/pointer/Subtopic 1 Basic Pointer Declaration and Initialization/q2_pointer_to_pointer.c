#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;
    int **pptr = &ptr;  // Pointer to pointer

    printf("Value of x: %d\n", **pptr);  // Output: 10
    return 0;
}