#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));  // Dynamic memory allocation
    if (arr == NULL) { printf("Memory allocation failed\n"); return 1; }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));  // Access elements using pointer arithmetic
    }

    free(arr);  // Free allocated memory
    return 0;
}