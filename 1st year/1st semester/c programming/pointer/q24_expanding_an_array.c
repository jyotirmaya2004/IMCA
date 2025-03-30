#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n = 3;
    arr = (int*) malloc(n * sizeof(int));  // Allocate memory for 3 integers
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;

    n = 5;  // Increase size to 5
    arr = (int*) realloc(arr, n * sizeof(int));  
    if (arr == NULL) {
        printf("Reallocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);  // Will print 1 2 3 (old values) and garbage for new memory

    free(arr);
    return 0;
}
