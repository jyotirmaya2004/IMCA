#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1024

int main() {
    FILE *fp;
    char filename[100];
    char line[MAX_LINE_LENGTH];

    // Ask for the file name
    printf("Enter the file name: ");
    scanf("%s", filename);

    // Open the file
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    int lineNumber = 1;
    while (fgets(line, sizeof(line), fp)) {
        int wordCount = 0;
        int inWord = 0;

        // Count the words in the line
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] == ' ' || line[i] == '\t' || line[i] == '\n') {
                inWord = 0;
            } else if (!inWord) {
                wordCount++;
                inWord = 1;
            }
        }

        // Print the line number and word count
        printf("Line %d: %d words\n", lineNumber, wordCount);
        lineNumber++;
    }

    fclose(fp);
    return 0;
}

