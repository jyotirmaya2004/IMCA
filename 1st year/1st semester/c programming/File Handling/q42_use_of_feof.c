/*
 * C Program to Copy File using feof()
 *
 * Author: Jyotirmaya Behera
 * Date: 15 Feb, 2025
 */

 #include <stdio.h>
 #include <stdlib.h>
 
 int main() {
     char source_file[100], destination_file[100];
     FILE *source, *destination;
     char ch;
 
     printf("Enter the source file name: ");
     scanf("%s", source_file);
 
     printf("Enter the destination file name: ");
     scanf("%s", destination_file);
 
     source = fopen(source_file, "r");
     if (source == NULL) {
         printf("Cannot open source file %s\n", source_file);
         exit(1);
     }
 
     destination = fopen(destination_file, "w");
     if (destination == NULL) {
         printf("Cannot open destination file %s\n", destination_file);
         fclose(source);
         exit(1);
     }
 
     // Using feof() to check for the end of the file
     while (!feof(source)) {
         ch = fgetc(source);
         if (!feof(source)) {  // Ensuring the last EOF read is not written
             fputc(ch, destination);
         }
     }
 
     printf("File copied successfully using feof().\n");
 
     fclose(source);
     fclose(destination);
 
     return 0;
 }
 