#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

// Function to count vowels in a given string
int count_vowels(const char *line) {
    int count = 0;
    for (int i = 0; line[i] != '\0'; i++) {
        char ch = line[i];
        // Check for both uppercase and lowercase vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    FILE *file;
    char filename[] = "lines2.txt";
    char buffer[MAX_LINE_LENGTH];
    int numLines;

    // Prompt user to specify the number of lines
    printf("Enter the number of lines to write: ");
    scanf("%d", &numLines);
    getchar(); // Consume the newline character left by scanf

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

    // Read the file line by line and count vowels in each line
    printf("\nNumber of vowels in each line:\n");
    int lineNumber = 1;
    while (fgets(buffer, MAX_LINE_LENGTH, file)) {
        int vowelCount = count_vowels(buffer);
        printf("Line %d: %d vowels\n", lineNumber, vowelCount);
        lineNumber++;
    }

    fclose(file);
    return 0;
}
