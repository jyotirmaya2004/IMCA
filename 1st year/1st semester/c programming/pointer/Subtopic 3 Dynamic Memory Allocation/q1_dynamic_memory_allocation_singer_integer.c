#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));  // Allocate memory
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *ptr = 10;  // Assign value
    printf("Value: %d\n", *ptr);  // Output: 10

    free(ptr);  // Free memory
    return 0;
}