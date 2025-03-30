#include <stdio.h>
#include <string.h>

#define MAX_LINES 10
#define MAX_LENGTH 256

int main() {
    char lines[MAX_LINES][MAX_LENGTH];
    int numLines;

    // Get the number of lines from the user
    printf("Enter the number of lines: ");
    scanf("%d", &numLines);
    getchar(); // Consume the newline left by scanf

    // Read the lines from the user
    printf("Enter %d lines:\n", numLines);
    for (int i = 0; i < numLines; i++) {
        printf("Line %d: ", i + 1);
        fgets(lines[i], MAX_LENGTH, stdin);

        // Remove newline character if present
        int len = strlen(lines[i]);
        if (lines[i][len - 1] == '\n') {
            lines[i][len - 1] = '\0';
        }
    }

    // Print the first word of each line
    printf("\nFirst word of each line:\n");
    for (int i = 0; i < numLines; i++) {
        char firstWord[MAX_LENGTH];
        int j = 0;

        // Extract first word
        while (lines[i][j] != ' ' && lines[i][j] != '\0') {
            firstWord[j] = lines[i][j];
            j++;
        }
        firstWord[j] = '\0'; // End string

        // Print first word
        printf("Line %d: %s\n", i + 1, firstWord);
    }

    return 0;
}
