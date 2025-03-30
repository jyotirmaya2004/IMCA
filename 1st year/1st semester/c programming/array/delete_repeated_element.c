#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    int i, j, k;
    printf("Enter element : ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    

    // Print the original array
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Remove duplicates
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements to the left to remove the duplicate
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; // Decrease the array size
                j--; // Check the new element at index j
            }
        }
    }

    // Print the array after removing duplicates
    printf("Array after removing duplicates: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}