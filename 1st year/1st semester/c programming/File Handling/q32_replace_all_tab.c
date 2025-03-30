//Replace All Tabs with Spaces in a File
#include <stdio.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if (fp == NULL || temp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\t') {
            fputc(' ', temp);
        } else {
            fputc(ch, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("file.txt");
    rename("temp.txt", "file.txt");

    printf("Tabs replaced with spaces successfully.\n");
    return 0;
}
