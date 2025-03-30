#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "apple,banana,grape";
    char *token = strtok(str, ",");

    while (token) {
        printf("Token: %s\n", token);
        token = strtok(NULL, ",");
    }

    return 0;
}
