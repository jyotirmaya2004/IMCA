#include <stdio.h>
#include <string.h>

int main()
{
    char a[50], words[10][50];  // Array to store words
    printf("Enter your name: ");
    gets(a);

    int j = 0, k = 0, word_count = 0;

    // Splitting words
    for (int i = 0; i <= strlen(a); i++)
    {
        if (a[i] != 32 && a[i] != '\0')
            words[word_count][j++] = a[i]; // Store char in word array
        else
        {
            words[word_count][j] = '\0'; // Terminate current word
            word_count++;  // Move to next word
            j = 0;  // Reset for next word
        }
    }

    // Finding the middle word
    if (word_count > 2)  // Middle word exists only if more than 2 words
    {
        printf("The middle word of your name: \"%s\"\n", words[word_count / 2]);
    }
    else
    {
        printf("No middle word found.\n");
    }

    return 0;
}
