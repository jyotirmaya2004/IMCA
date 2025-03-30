#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *ptr = &arr[0][0];  // Pointer to the first element

    for (int i = 0; i < 6; i++) {
        printf("%d ", *(ptr + i));  // Output: 1 2 3 4 5 6
    }
    return 0;
}