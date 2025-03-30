#include <stdio.h>
#include <string.h>
void reverse(char *str) {
    int len = strlen(str);
    char *start = str, *end = str + len - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++, end--;
    }
}
int main() {
    char str[] = "hello";
    reverse(str);
    printf("%s\n", str);
    return 0;
}
