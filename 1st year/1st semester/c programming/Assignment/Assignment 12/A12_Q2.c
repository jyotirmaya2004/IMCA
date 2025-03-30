/*
  C Program to Reverse a String
 
 */

 #include <stdio.h>
 #include <string.h>
 
 void reverse(char str[]) {
     int length = strlen(str);
     for (int i = 0; i < length / 2; i++) {
         char temp = str[i];
         str[i] = str[length - i - 1];
         str[length - i - 1] = temp;
     }
 }
 
 int main() {
     char str[100];
 
     printf("Enter a string: ");
     fgets(str, sizeof(str), stdin);
 
     str[strcspn(str, "\n")] = '\0';
 
     reverse(str);
 
     printf("Reversed string: %s\n", str);
 
     return 0;
 }
 