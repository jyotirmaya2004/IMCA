/*
 * C Program to Check Whether an Alphabet is a Vowel or Consonant Using Nested If
 
 */

 #include <ctype.h>
 #include <stdio.h>
 
 int main() {
     char ch;
     
     // Prompt user for input
     printf("Enter an alphabet: ");
     
     // Read input
     if (scanf("%c", &ch) != 1) {
         printf("Invalid input! Please enter a single alphabet character.\n");
         return 1; // Exit with an error code
     }
     
     // Check if input is an alphabet
     if (isalpha(ch)) {
         // Convert to lowercase for easier comparison
         char lower_ch = tolower(ch);
         
         if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
             printf("'%c' is a vowel.\n", ch);
         } else {
             printf("'%c' is a consonant.\n", ch);
         }
     } else {
         printf("The entered character '%c' is not an alphabet.\n", ch);
     }
     
     return 0;
 }
 