#include <stdio.h>

int main() {
    char *fruits[] = {"Apple", "Banana", "Cherry"};  // Array of strings
    char **ptr = fruits;  // Pointer to the first string

    for (int i = 0; i < 3; i++) {
        printf("%s\n", *(ptr + i));  // Output: Apple Banana Cherry
    }
    return 0;
}