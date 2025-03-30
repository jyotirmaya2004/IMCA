#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)calloc(n, sizeof(int));  // Allocate and initialize memory
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Output: 0 0 0 ...
    }

    free(arr);  // Free memory
    return 0;
}