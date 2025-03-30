// Find and Replace a Word in a File
#include <stdio.h>
#include <string.h>

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

    char buffer[256], word[50] = "old", replacement[50] = "new";
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        char *pos;
        while ((pos = strstr(buffer, word)) != NULL) {
            int len = pos - buffer;
            buffer[len] = '\0';
            strcat(buffer, replacement);
            strcat(buffer, pos + strlen(word));
        }
        fputs(buffer, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("file.txt");
    rename("temp.txt", "file.txt");

    printf("Word replaced successfully.\n");
    return 0;
}
