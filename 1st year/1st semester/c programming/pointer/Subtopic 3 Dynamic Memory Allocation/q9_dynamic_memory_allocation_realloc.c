#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the initial number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));  // Allocate memory
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int new_n;
    printf("Enter the new number of elements: ");
    scanf("%d", &new_n);

    arr = (int *)realloc(arr, new_n * sizeof(int));  // Resize memory
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    printf("Elements: ");
    for (int i = 0; i < new_n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);  // Free memory
    return 0;
}