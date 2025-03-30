//Count the Number of Words in a File
#include <stdio.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    if (!fp) {
        perror("Error opening file");
        return 1;
    }

    int words = 0, in_word = 0;
    char ch;

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c\n",ch);
        if (ch == ' ' || ch == '\n') {
            in_word = 0;
        } else if (!in_word) {
            words++;
            in_word = 1;
        }
    }

    fclose(fp);
    printf("Number of words: %d\n", words);
    return 0;
}


