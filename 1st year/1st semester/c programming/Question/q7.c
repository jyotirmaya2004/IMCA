//How can you check if an array is sorted in any order?
#include <stdio.h>

int main() {
    int n, i, isSorted = 1,isSorted2 = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = 0;
            break;
        }
    }
    for (i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            isSorted2 = 0;
            break;
        }
    }

    if (isSorted) {
        printf("The array is sorted in ascending order.\n");
    }
    else if (isSorted2) {
        printf("The array is sorted in descending order.\n");
    } 
    else {
        printf("The array is not sorted.\n");
    }
    return 0;
}
