#include <stdio.h>
#include <string.h>

#define MAX_LINES 10
#define MAX_LENGTH 256

// Function to reverse a word within a line
void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

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

    // Process each line to reverse characters of each word
    printf("\nReversed words in each line:\n");
    for (int i = 0; i < numLines; i++) {
        char *start = lines[i];
        char *end = lines[i];

        while (*end) {
            // Move to the end of a word
            while (*end && *end != ' ') {
                end++;
            }

            // Reverse the found word
            reverseWord(start, end - 1);

            // Move to the next word
            if (*end) {
                end++;
            }
            start = end;
        }

        // Print the modified line
        printf("Line %d: %s\n", i + 1, lines[i]);
    }

    return 0;
}
