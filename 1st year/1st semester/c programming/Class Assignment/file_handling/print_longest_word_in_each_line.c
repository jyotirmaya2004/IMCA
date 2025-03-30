#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024
#define MAX_WORD_LENGTH 100

int main() {
    FILE *fp;
    char filename[100];
    char line[MAX_LINE_LENGTH];
    char longestWord[MAX_WORD_LENGTH];

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
        printf("Line %d: %s", lineNumber, line);

        // Initialize variables
        char *word = strtok(line, " \n");
        int maxLength = 0;

        // Find the longest word
        while (word != NULL) {
            if (strlen(word) > maxLength) {
                maxLength = strlen(word);
                strcpy(longestWord, word);
            }
            word = strtok(NULL, " \n");
        }

        // Print the longest word
        printf("Longest word: %s\n", longestWord);
        lineNumber++;
    }

    fclose(fp);
    return 0;
}


