#include <stdio.h>
#include <string.h>

// Function to remove common words from str1 that exist in str2
void delete_common_words(char *str1, char *str2) {
    char result[200] = "";  // Store the modified string
    char word[50];          // Temporary storage for a word
    int i = 0, j = 0, found;

    while (str1[i] != '\0') {
        // Extract a word from str1
        j = 0;
        while (str1[i] != ' ' && str1[i] != '\0') {
            word[j++] = str1[i++];
        }
        word[j] = '\0';  // Null-terminate the word

        // Skip extra spaces
        if (str1[i] == ' ') i++;

        // Check if the word exists in str2
        found = (strstr(str2, word) != NULL);

        // If the word is not in str2, add it to the result
        if (!found) {
            strcat(result, word);
            strcat(result, " ");  // Add space between words
        }
    }

    // Remove trailing space, if any
    if (strlen(result) > 0) result[strlen(result) - 1] = '\0';

    // Copy result back to str1
    strcpy(str1, result);
}

int main() {
    char str1[200], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = '\0';  // Remove the newline character

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = '\0';  // Remove the newline character

    delete_common_words(str1, str2);

    printf("Modified string: %s\n", str1);
    return 0;
}
