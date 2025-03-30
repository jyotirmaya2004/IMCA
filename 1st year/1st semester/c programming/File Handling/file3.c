#include <stdio.h>

int main() {
    char c;
    printf("Enter text (Ctrl+Z to end):\n");
    while ((c = getchar()) != EOF) {
        putchar(c); // Echo the character
    }
    printf("\nEOF reached\n");
    return 0;
}