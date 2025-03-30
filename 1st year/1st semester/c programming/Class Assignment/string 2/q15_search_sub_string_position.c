#include <stdio.h>
#include <string.h>

// Function to search for a substring in a string
int search_substring(char *str, char *substr) {
    int len_str = strlen(str);
    int len_substr = strlen(substr);

    for (int i = 0; i <= len_str - len_substr; i++) {
        int j;
        for (j = 0; j < len_substr; j++) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }
        if (j == len_substr) {
            return i + 1;  // Return the position of the substring
        }
    }
    return -1;  // Return -1 if the substring is not found
}

int main() {
    char str[100], substr[50];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';  // Remove the newline character

    printf("Enter the substring: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strlen(substr) - 1] = '\0';  // Remove the newline character

    int position = search_substring(str, substr);

    if (position != -1) {
        printf("The substring '%s' is found at position %d.\n", substr, position);
    } else {
        printf("The substring '%s' is not found in the string.\n", substr);
    }

    return 0;
}
