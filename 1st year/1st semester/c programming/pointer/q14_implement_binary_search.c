//Implement binary search using pointers
#include <stdio.h>
int binarySearch(int *arr, int n, int key) {
    int *low = arr, *high = arr + n - 1;
    while (low <= high) {
        int *mid = low + (high - low) / 2;
        if (*mid == key) return mid - arr;
        if (*mid < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int key = 5;
    printf("Index: %d\n", binarySearch(arr, 5, key));
    return 0;
}
