#include <stdio.h>
#include <string.h>

int main() {
    char str1[30] = "Hello";
    char str2[] = ", World!";

    // Using strcat
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // Using strncat (appending only 5 characters)
    char str3[30] = "Hello";
    strncat(str3, str2, 5);
    printf("Concatenated string using strncat: %s\n", str3);

    return 0;
}
