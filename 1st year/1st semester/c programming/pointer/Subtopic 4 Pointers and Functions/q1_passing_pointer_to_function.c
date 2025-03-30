#include <stdio.h>

void increment(int *ptr) {
    (*ptr)++;  // Increment the value pointed to by ptr
}

int main() {
    int x = 10;
    increment(&x);  // Pass the address of x
    printf("Value of x: %d\n", x);  // Output: 11
    return 0;
}