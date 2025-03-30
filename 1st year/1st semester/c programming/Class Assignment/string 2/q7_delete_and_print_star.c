#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to delete a word from a string and print asterisks
void delete_word(char *str, char *word) {
    int len_str = strlen(str);
    int len_word = strlen(word);

    // Find the word in the string
    char *ptr = strstr(str, word);

    while (ptr != NULL) {
        // Replace the word with asterisks
        for (int i = 0; i < len_word; i++) {
            *ptr = '*';
            ptr++;
        }

        // Find the next occurrence of the word
        ptr = strstr(ptr, word);
    }

    // Print the modified string
    printf("%s\n", str);
}

int main() {
    char str[100];
    char word[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';  // Remove the newline character

    printf("Enter the word to delete: ");
    fgets(word, sizeof(word), stdin);
    word[strlen(word) - 1] = '\0';  // Remove the newline character

    delete_word(str, word);

    return 0;
}

