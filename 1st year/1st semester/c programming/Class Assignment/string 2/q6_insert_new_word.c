#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to insert a new word after a given word
void insert_word(char *str, char *word, char *new_word) {
    int len_str = strlen(str);
    int len_word = strlen(word);
    int len_new_word = strlen(new_word);

    // Find the word in the string
    char *ptr = strstr(str, word);

    if (ptr != NULL) {
        // Calculate the position of the word
        int pos = ptr - str;

        // Allocate memory for the new string
        char *new_str = (char *)malloc((len_str + len_new_word + 1) * sizeof(char));

        // Copy the first part of the string
        strncpy(new_str, str, pos + len_word);

        // Add the new word
        strcat(new_str, " ");
        strcat(new_str, new_word);

        // Add the rest of the string
        strcat(new_str, str + pos + len_word);

        // Print the new string
        printf("%s\n", new_str);

        // Free the memory
        free(new_str);
    } else {
        printf("Word not found!\n");
    }
}

int main() {
    char str[100];
    char word[50];
    char new_word[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';  // Remove the newline character

    printf("Enter the word to insert after: ");
    fgets(word, sizeof(word), stdin);
    word[strlen(word) - 1] = '\0';  // Remove the newline character

    printf("Enter the new word: ");
    fgets(new_word, sizeof(new_word), stdin);
    new_word[strlen(new_word) - 1] = '\0';  // Remove the newline character

    insert_word(str, word, new_word);

    return 0;
}
