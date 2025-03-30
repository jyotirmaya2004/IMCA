#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to delete the first word and insert it at the end
void move_first_word_to_end(char *str) {
    // Find the space after the first word
    char *space = strchr(str, ' ');

    if (space != NULL) {
        // Extract the first word
        char first_word[100];
        strncpy(first_word, str, space - str);
        first_word[space - str] = '\0';

        // Delete the first word from the original string
        strcpy(str, space + 1);

        // Insert the first word at the end of the string
        strcat(str, " ");
        strcat(str, first_word);

        // Print the modified string
        printf("%s\n", str);
    } else {
        printf("No space found in the string!\n");
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';  // Remove the newline character

    move_first_word_to_end(str);

    return 0;
}


