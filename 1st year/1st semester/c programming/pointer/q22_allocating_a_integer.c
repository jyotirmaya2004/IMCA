#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*) malloc(sizeof(int));  // Allocates memory for one integer
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    *ptr = 10;
    printf("Value: %d\n", *ptr);
    free(ptr);
    return 0;
}
