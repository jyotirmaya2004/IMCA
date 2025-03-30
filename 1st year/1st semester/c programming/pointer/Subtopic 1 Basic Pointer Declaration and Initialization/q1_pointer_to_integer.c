#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;  // Pointer to x

    printf("Value of x: %d\n", *ptr);  // Output: 10
    return 0;
}