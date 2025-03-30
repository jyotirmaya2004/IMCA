#include <stdio.h>

int main() {
    int arr[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    int *ptr = &arr[0][0][0];  // Pointer to the first element
    int **pptr = &ptr;  // Pointer to pointer
    int ***ppptr = &pptr;  // Triple pointer

    for (int i = 0; i < 8; i++) {
        printf("%d ", *(**ppptr + i));  // Output: 1 2 3 4 5 6 7 8
    }
    return 0;
}