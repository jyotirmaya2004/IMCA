//Find the Frequency of a Specific Word in a File
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char word[50] = "the", buffer[256];
    int count = 0;

    while (fscanf(fp, "%s", buffer) != EOF) {
        if (strcmp(buffer, word) == 0) {
            count++;
        }
    }

    fclose(fp);
    printf("The word '%s' appears %d times.\n", word, count);
    return 0;
}
