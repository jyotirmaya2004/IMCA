#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;
    arr = (int*) calloc(n, sizeof(int));  // Allocates and initializes to zero
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);  // Will print 0 0 0 0 0
    free(arr);
    return 0;
}
