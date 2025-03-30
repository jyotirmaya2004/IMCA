#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Memory Copy Example";
    char dest[30];

    // Using memcpy
    memcpy(dest, src, strlen(src) + 1);
    printf("Copied string using memcpy: %s\n", dest);

    // Using memset
    memset(dest, '*', 5);
    dest[5] = '\0'; // Null-terminate
    printf("Modified string using memset: %s\n", dest);

    return 0;
}
