#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = (char *)malloc(50 * sizeof(char));  // Allocate memory
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    strcpy(str, "Hello, World!");  // Assign value
    printf("String: %s\n", str);  // Output: Hello, World!

    free(str);  // Free memory
    return 0;
}