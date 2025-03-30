#include <stdio.h>
#include <string.h>

#define MAX_LINES 5
#define MAX_LENGTH 256
#define MAX_WORD 50

// Function to count occurrences of a word in a given string
int count_word_occurrences(char *line, char *word) {
    int count = 0;
    char temp[256];  
    strcpy(temp, line);  // Copy line to avoid modifying the original
    char *token = strtok(temp, " ");  // Tokenize based on space

    while (token != NULL) {
        if (strcmp(token, word) == 0) {  // Compare words
            count++;
        }
        token = strtok(NULL, " ");  // Get next word
    }
    return count;
}


int main() {
    char lines[MAX_LINES][MAX_LENGTH];  // Array to store multiple lines
    char word[MAX_WORD];
    int numLines;

    printf("Enter the number of lines (max %d): ", MAX_LINES);
    scanf("%d", &numLines);
    getchar();  // Consume newline left by scanf

    // Read multiple lines
    printf("Enter %d lines:\n", numLines);
    for (int i = 0; i < numLines; i++) {
        fgets(lines[i], MAX_LENGTH, stdin);
        
        // Remove newline character if present
        size_t len = strlen(lines[i]);
        if (lines[i][len - 1] == '\n') {
            lines[i][len - 1] = '\0';
        }
    }

    // Get the word to search for
    printf("\nEnter the word to count: ");
    fgets(word, MAX_WORD, stdin);

    // Remove newline character from the word
    size_t len = strlen(word);
    if (word[len - 1] == '\n') {
        word[len - 1] = '\0';
    }

    // Count occurrences in each line
    printf("\nOccurrences of \"%s\" in each line:\n", word);
    for (int i = 0; i < numLines; i++) {
        printf("Line %d: %d times\n", i + 1, count_word_occurrences(lines[i], word));
    }

    return 0;
}
