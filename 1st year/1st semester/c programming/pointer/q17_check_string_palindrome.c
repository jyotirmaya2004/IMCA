#include <stdio.h>
#include <string.h>
int isPalindrome(char *str) {
    char *start = str, *end = str + strlen(str) - 1;
    while (start < end) {
        if (*start != *end) return 0;
        start++, end--;
    }
    return 1;
}
int main() {
    char str[] = "madam";
    printf("%s is %s\n", str, isPalindrome(str) ? "a palindrome" : "not a palindrome");
    return 0;
}
