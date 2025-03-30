#include <stdio.h>
#include <string.h>

int main() {
    char s[50];
    int i, j, temp;

    printf("Enter a word: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';  // Remove trailing newline

    printf("Original string: %s\n", s);
    
    int n = strlen(s);

    // Bubble sort for descending order
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (s[j] < s[j + 1]) {  // Change condition to descending order
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("String in descending order: %s\n", s);

    return 0;
}
