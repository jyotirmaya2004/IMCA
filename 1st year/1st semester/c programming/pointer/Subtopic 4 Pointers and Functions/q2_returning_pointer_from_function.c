#include <stdio.h>

int* max(int *a, int *b) {
    return (*a > *b) ? a : b;  // Return pointer to the larger value
}

int main() {
    int x = 10, y = 20;
    int *result = max(&x, &y);  // Get pointer to the maximum value
    printf("Max: %d\n", *result);  // Output: 20
    return 0;
}