//read a file
#include <stdio.h>

int main() {
    FILE *fp = fopen("text.txt", "r");  // Open file in read mode
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
