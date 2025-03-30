//Convert All Text in a File to Lowercase
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    FILE *temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        perror("Error opening temporary file");
        fclose(fp);
        return 1;
    }

    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        fputc(tolower(ch), temp);
    }

    fclose(fp);
    fclose(temp);

    remove("file.txt");
    rename("temp.txt", "file.txt");

    printf("File converted to lowercase successfully.\n");
    return 0;
}
