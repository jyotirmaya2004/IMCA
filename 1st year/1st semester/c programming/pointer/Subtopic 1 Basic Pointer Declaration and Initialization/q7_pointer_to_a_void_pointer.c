#include <stdio.h>

int main() {
    int x = 10;
    void *vptr = &x;  // Void pointer

    printf("Value of x: %d\n", *(int *)vptr);  // Output: 10
    return 0;
}