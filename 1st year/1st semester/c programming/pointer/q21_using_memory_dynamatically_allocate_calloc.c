#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr = (int *)calloc(5, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]); // Initialized to 0
    free(arr);
    return 0;
}
