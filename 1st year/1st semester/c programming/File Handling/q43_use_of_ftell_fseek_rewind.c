/*
 * C Program to Demonstrate fseek(), ftell(), and rewind()
 *
 * Author: Jyotirmaya Behera
 * Date: 15 Feb, 2025
 */

 #include <stdio.h>
 #include <stdlib.h>
 
 int main() {
     FILE *file;
     char ch;
 
     // Open the file in read mode
     file = fopen("example.txt", "r");
     if (file == NULL) {
         printf("Error opening file!\n");
         exit(1);
     }
 
     // Read and display the first character
     ch = fgetc(file);
     printf("First character: %c\n", ch);
 
     // Use ftell() to get the current file position
     long position = ftell(file);
     printf("Current position in file: %ld\n", position);
 
     // Use fseek() to move 5 bytes ahead from the current position
     fseek(file, 5, SEEK_CUR);
     ch = fgetc(file);
     printf("Character after skipping 5 bytes: %c\n", ch);
 
     // Use fseek() to go to the beginning of the file
     fseek(file, 0, SEEK_SET);
     ch = fgetc(file);
     printf("First character after fseek to start: %c\n", ch);
 
     // Use rewind() to reset file position to the beginning
     rewind(file);
     ch = fgetc(file);
     printf("First character after rewind: %c\n", ch);
 
     // Close the file
     fclose(file);
 
     return 0;
 }
 