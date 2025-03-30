#include <stdio.h>

int search(int *arr, int n, int key) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == key) {
            return i;  // Return index if found
        }
    }
    return -1;  // Return -1 if not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int index = search(arr, n, key);
    if (index != -1) {
        printf("Element found at index: %d\n", index);  // Output: Element found at index: 2
    } else {
        printf("Element not found\n");
    }
    return 0;
}