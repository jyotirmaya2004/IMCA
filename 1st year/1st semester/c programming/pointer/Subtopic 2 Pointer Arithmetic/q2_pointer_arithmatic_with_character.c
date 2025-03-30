#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *ptr = str;  // Pointer to the first character

    while (*ptr != '\0') {
        printf("%c ", *ptr);  // Output: H e l l o
        ptr++;  // Move to the next character
    }
    return 0;
}