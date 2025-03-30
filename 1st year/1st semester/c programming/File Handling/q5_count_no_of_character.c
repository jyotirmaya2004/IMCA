//Count the Number of Characters in a File
#include <stdio.h>

int main() {
    FILE *fp = fopen("file1.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    int count = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        count++;
    }

    fclose(fp);
    printf("Number of characters: %d\n", count);
    return 0;
}
