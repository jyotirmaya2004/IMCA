//Replace a Specific Line in a File
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if (fp == NULL || temp == NULL) {
        perror("Error opening file");
        return 1;
    }

    int line_to_replace = 3, current_line = 1;
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        if (current_line == line_to_replace) {
            fputs("This is the replaced line.\n", temp);
        } else {
            fputs(buffer, temp);
        }
        current_line++;
    }

    fclose(fp);
    fclose(temp);
    remove("file.txt");
    rename("temp.txt", "file.txt");

    printf("Line replaced successfully.\n");
    return 0;
}
