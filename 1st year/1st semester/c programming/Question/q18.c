//Write a program to find the union of two arrays.
#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0, found;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of the first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of the second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int unionArr[n1 + n2];
    for (i = 0; i < n1; i++) {
        unionArr[k++] = arr1[i];
    }

    for (i = 0; i < n2; i++) {
        found = 0;
        for (j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            unionArr[k++] = arr2[i];
        }
    }

    printf("Union of the arrays:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    return 0;
}
