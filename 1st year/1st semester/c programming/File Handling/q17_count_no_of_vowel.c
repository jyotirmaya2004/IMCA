//Count the Number of Vowels in a File
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    int vowels = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    fclose(fp);
    printf("Number of vowels: %d\n", vowels);
    return 0;
}
