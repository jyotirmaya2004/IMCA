/*
 * C Program to Compute File Size
 */

 #include <stdio.h>
 #include <stdlib.h>
 
 int main()
 {
     char file_name[100];
     FILE *file;
     long file_size;
 
     printf("Enter the file name: ");
     scanf("%s", file_name);
 
     file = fopen(file_name, "r");
     if (file == NULL)
     {
         printf("Cannot open file %s\n", file_name);
         exit(1);
     }
 
     fseek(file, 0, SEEK_END);
     file_size = ftell(file);
 
     fclose(file);
 
     printf("File size: %.2f KB\n", file_size / 1024.0);
 
     return 0;
 }
 