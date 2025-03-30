/*
* Description: This C program checks whether a string is a palindrome using a user-defined function named checkPalindrome().
* The string is entered by the user as run-time input.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int checkPalindrome(char str[]) {
    int left = 0, right = strlen(str) - 1;

    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str); // Prevent buffer overflow

    if (checkPalindrome(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
