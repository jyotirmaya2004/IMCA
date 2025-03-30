//Sort Lines in a File Alphabetically
#include <stdio.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LENGTH 256

int main() {
    FILE *fp = fopen("file.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    if (fp == NULL || temp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char lines[MAX_LINES][MAX_LENGTH];
    int count = 0;

    while (fgets(lines[count], MAX_LENGTH, fp) != NULL && count < MAX_LINES) {
        count++;
    }
    fclose(fp);

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(lines[i], lines[j]) > 0) {
                char temp[MAX_LENGTH];
                strcpy(temp, lines[i]);
                strcpy(lines[i], lines[j]);
                strcpy(lines[j], temp);
            }
        }
    }

    for (int i = 0; i < count; i++) {
        fputs(lines[i], temp);
    }

    fclose(temp);

    remove("file.txt");
    rename("temp.txt", "file.txt");

    printf("Lines sorted alphabetically.\n");
    return 0;
}
