#include <stdio.h>
int stringLength(char *str) {
    int len = 0;
    while (*str++) len++;
    return len;
}
int main() {
    char str[] = "Pointers";
    printf("Length: %d\n", stringLength(str));
    return 0;
}
