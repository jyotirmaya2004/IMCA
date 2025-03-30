#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 2, cols = 3;
    int **arr = (int **)malloc(rows * sizeof(int *));

    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    // Assign values
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(*(arr + i) + j) = i + j;  // Pointer arithmetic
        }
    }

    // Print values
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(*(arr + i) + j));  // Pointer arithmetic
        }
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}