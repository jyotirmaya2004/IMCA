#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dest[20];

    // Using strcpy
    strcpy(dest, src);
    printf("Copied string using strcpy: %s\n", dest);

    // Using strncpy (copying only 5 characters)
    char dest2[20];
    strncpy(dest2, src, 5);
    dest2[5] = '\0'; // Null-terminate manually
    printf("Copied string using strncpy: %s\n", dest2);

    return 0;
}
