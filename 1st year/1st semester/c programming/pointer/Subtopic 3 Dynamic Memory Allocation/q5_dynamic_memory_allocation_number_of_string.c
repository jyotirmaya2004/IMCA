#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char **arr = (char **)malloc(n * sizeof(char *));  // Allocate memory for strings
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = (char *)malloc(50 * sizeof(char));  // Allocate memory for each string
        printf("Enter string %d: ", i + 1);
        scanf("%s", arr[i]);
    }

    printf("Strings: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }

    // Free memory
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}