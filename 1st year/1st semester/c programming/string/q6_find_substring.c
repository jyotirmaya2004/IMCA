#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char sub[] = "World";

    char *ptr = strstr(str, sub);
    if (ptr)
        printf("Substring found at position: %ld\n", ptr - str);
    else
        printf("Substring not found\n");

    return 0;
}
