#include <stdio.h>
void stringCopy(char *dest, char *src) {
    while ((*dest++ = *src++));
}
int main() {
    char src[] = "C Programming";
    char dest[50];
    stringCopy(dest, src);
    printf("Copied String: %s\n", dest);
    return 0;
}
