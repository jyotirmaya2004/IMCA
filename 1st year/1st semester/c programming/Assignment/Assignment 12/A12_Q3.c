/*
 * C Program to Reverse a String and Count Words
 
 */

 #include <stdio.h>
 #include <string.h>
 #include <ctype.h>
 
 void reverse(char str[]) {
     int length = strlen(str);
     for (int i = 0; i < length / 2; i++) {
         char temp = str[i];
         str[i] = str[length - i - 1];
         str[length - i - 1] = temp;
     }
 }
 
 int word_count(char str[]) {
     int count = 0;
     int in_word = 0;
 
     for (int i = 0; str[i] != '\0'; i++) {
         if (isspace(str[i])) {
             in_word = 0;
         } else if (in_word == 0) {
             in_word = 1;
             count++;
         }
     }
 
     return count;
 }
 
 int main() {
     char str[100];
 
     printf("Enter a string: ");
     fgets(str, sizeof(str), stdin);
 
     str[strcspn(str, "\n")] = '\0';
 
     reverse(str);
     printf("Reversed string: %s\n", str);
 
     int num_words = word_count(str);
     printf("Number of words: %d\n", num_words);
 
     return 0;
 }
 