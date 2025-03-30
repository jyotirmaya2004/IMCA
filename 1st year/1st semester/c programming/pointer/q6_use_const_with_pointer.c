#include <stdio.h>
int main() {
    const int a = 10;
    const int *p = &a; // Pointer to a constant
    // *p = 20; // Error: Cannot modify value through pointer
    printf("%d\n", *p);
    return 0;
}
