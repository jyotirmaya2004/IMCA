#include <stdio.h>
#include <string.h>

#define MAX_LINES 5
#define MAX_LENGTH 256

// Function to count vowels in a given string
int count_vowels(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    char lines[MAX_LINES][MAX_LENGTH];  // Array to store multiple lines
    int numLines;

    printf("Enter the number of lines (max %d): ", MAX_LINES);
    scanf("%d", &numLines);
    getchar();  // Consume the newline left by scanf

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

    // Count vowels in each line
    printf("\nNumber of vowels in each line:\n");
    for (int i = 0; i < numLines; i++) {
        printf("Line %d: %d vowels\n", i + 1, count_vowels(lines[i]));
    }

    return 0;
}
