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

    // Count characters in each line
    printf("\nCharacter count in each line:\n");
    for (int i = 0; i < numLines; i++) {
        printf("Line %d: %d characters\n", i + 1, (int)strlen(lines[i]));
    }

    return 0;
}
