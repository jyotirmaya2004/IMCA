
#include <stdio.h>

int main() {
    FILE *fp = fopen("file1.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    int lines = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }

    fclose(fp);
    printf("Number of lines: %d\n", lines);
    return 0;
}
