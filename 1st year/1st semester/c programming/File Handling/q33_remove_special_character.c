//Remove All Special Characters from a File
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if (fp == NULL || temp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (isalnum(ch) || isspace(ch)) {
            fputc(ch, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("file.txt");
    rename("temp.txt", "file.txt");

    printf("Special characters removed successfully.\n");
    return 0;
}
