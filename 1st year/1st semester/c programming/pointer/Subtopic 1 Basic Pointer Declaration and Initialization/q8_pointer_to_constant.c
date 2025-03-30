#include <stdio.h>

int main() {
    const int x = 10;
    const int *ptr = &x;  // Pointer to a constant integer

    // *ptr = 20;  // This would cause a compilation error
    printf("Value of x: %d\n", *ptr);  // Output: 10
    return 0;
}