#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

int main() {
    FILE *file;
    char filename[] = "lines.txt";
    char buffer[MAX_LINE_LENGTH];
    int numLines;

    // Prompt user to specify the number of lines
    printf("Enter the number of lines to write: ");
    scanf("%d", &numLines);
    getchar();  // Consume newline character left by scanf

    // Open the file for writing
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    // Write lines to the file
    printf("Enter %d lines:\n", numLines);
    for (int i = 0; i < numLines; i++) {
        printf("Line %d: ", i + 1);
        fgets(buffer, MAX_LINE_LENGTH, stdin);
        fprintf(file, "%s", buffer);
    }

    fclose(file);

    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    // Read the file line by line and print the first word of each line
    printf("\nFirst words of each line in the file:\n");
    while (fgets(buffer, MAX_LINE_LENGTH, file)) {
        char *firstWord = strtok(buffer, " \t\n");  // Tokenize to get the first word
        if (firstWord != NULL) {
            printf("%s\n", firstWord);
        }
    }

    fclose(file);
    return 0;
}
