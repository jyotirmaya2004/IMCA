// Write a program to find all unique elements in an array.
#include <stdio.h>

int main() {
    int n, i, j, isUnique;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements in the array are:\n");
    for (i = 0; i < n; i++) {
        isUnique = 1;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j] && i != j) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
