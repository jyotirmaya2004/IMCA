#include <stdio.h>
#include<string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';  // Remove the newline character

    printf("ASCII equivalents of each character:\n");
    for (int i = 0; i < strlen(str); i++) {
        printf("Character '%c' has ASCII value %d\n", str[i], str[i]);
    }
    return 0;
}


