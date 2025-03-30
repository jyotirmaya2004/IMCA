#include <stdio.h>
#include <stdlib.h>

int* createArray(int n) {
    int *arr = (int *)malloc(n * sizeof(int));  // Allocate memory
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;  // Assign values
    }

    return arr;  // Return pointer to the array
}

int main() {
    int n = 5;
    int *arr = createArray(n);  // Get pointer to the array

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Output: 1 2 3 4 5
    }

    free(arr);  // Free memory
    return 0;
}