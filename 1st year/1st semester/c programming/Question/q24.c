//Write a program to find the common elements in three arrays.
#include <stdio.h>

int main() {
    int n1, n2, n3, i, j, k;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of the first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of the second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Enter the size of the third array: ");
    scanf("%d", &n3);
    int arr3[n3];
    printf("Enter elements of the third array:\n");
    for (i = 0; i < n3; i++) {
        scanf("%d", &arr3[i]);
    }

    printf("Common elements:\n");
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                for (k = 0; k < n3; k++) {
                    if (arr1[i] == arr3[k]) {
                        printf("%d ", arr1[i]);
                        break;
                    }
                }
                break;
            }
        }
    }
    return 0;
}
