#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "banana";

    // Using strcmp
    if (strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are different\n");

    // Using strncmp (compare only first 3 characters)
    if (strncmp(str1, str2, 3) == 0)
        printf("First 3 characters are equal\n");
    else
        printf("First 3 characters are different\n");

    return 0;
}
