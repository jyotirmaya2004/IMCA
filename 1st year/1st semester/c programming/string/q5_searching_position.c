#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    
    // Find first occurrence of 'o'
    char *ptr = strchr(str, 'o');
    if (ptr)
        printf("First occurrence of 'o' at position: %ld\n", ptr - str);
    
    // Find last occurrence of 'o'
    ptr = strrchr(str, 'o');
    if (ptr)
        printf("Last occurrence of 'o' at position: %ld\n", ptr - str);

    return 0;
}
