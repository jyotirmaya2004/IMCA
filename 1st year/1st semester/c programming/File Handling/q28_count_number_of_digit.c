//Count the Number of Digits in a File
#include <stdio.h>

int main() {
    FILE *fp = fopen("file1.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    int digits = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (ch >= '0' && ch <= '9') { // Check if the character is a digit
            digits++;
        }
    }

    fclose(fp);
    printf("Number of digits: %d\n", digits);
    return 0;
}
