#include <stdio.h>

int main() {
    char *fruits[] = {"Apple", "Banana", "Cherry"};  // Array of pointers
    int n = sizeof(fruits) / sizeof(fruits[0]);

    for (int i = 0; i < n; i++) {
        printf("%s\n", fruits[i]);  // Print each string
    }
    return 0;
}