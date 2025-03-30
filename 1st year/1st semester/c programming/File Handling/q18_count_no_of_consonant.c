//Count the Number of Consonants in a File
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    int consonants = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);
        if (isalpha(ch) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            consonants++;
        }
    }

    fclose(fp);
    printf("Number of consonants: %d\n", consonants);
    return 0;
}
