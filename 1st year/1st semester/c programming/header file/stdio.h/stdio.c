#include <stdio.h>
#include <stdlib.h>  // Needed for exit()

int main() {
    // 1. Standard Input/Output Functions
    printf("Enter a character: ");
    char ch = getchar();  // Read a single character
    printf("You entered: ");
    putchar(ch);  // Print a single character
    putchar('\n');

    printf("Enter a string: ");
    char str[50];
    fgets(str, sizeof(str), stdin);  // Safe alternative to gets()
    printf("You entered: ");
    puts(str);  // Print the string with a newline

    // 2. File Handling Functions
    FILE *file = fopen("example.txt", "w+");  // Open a file in write mode
    if (file == NULL) {
        perror("Error opening file");  // Display error message
        exit(1);
    }

    fprintf(file, "Hello, this is a file test.\n");  // Write formatted output
    fputs("Another line in the file.\n", file);  // Write a string

    rewind(file);  // Move file pointer to the beginning

    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("Read from file: %s", buffer);  // Read and print file content
    }

    fclose(file);  // Close the file

    // 3. Formatted I/O
    char formattedStr[100];
    sprintf(formattedStr, "Formatted number: %d", 42);  // Store formatted data in string
    printf("%s\n", formattedStr);

    int num;
    sscanf("123", "%d", &num);  // Extract integer from string
    printf("Extracted number: %d\n", num);

    // 4. File Positioning & Buffering
    file = fopen("example.txt", "r");
    if (file) {
        fseek(file, 10, SEEK_SET);  // Move file pointer to 10th byte
        printf("File position: %ld\n", ftell(file));  // Get current position
        rewind(file);  // Reset to start
        fclose(file);
    }

    // 5. Error Handling
    file = fopen("nonexistent.txt", "r");
    if (file == NULL) {
        perror("File opening failed");  // Print error message
    }

    return 0;
}
/*
List of functions in stdio.h:

1. Input/Output Functions:
    - int printf(const char *format, ...);
    - int fprintf(FILE *stream, const char *format, ...);
    - int sprintf(char *str, const char *format, ...);
    - int snprintf(char *str, size_t size, const char *format, ...);
    - int scanf(const char *format, ...);
    - int fscanf(FILE *stream, const char *format, ...);
    - int sscanf(const char *str, const char *format, ...);
    - int vprintf(const char *format, va_list arg);
    - int vfprintf(FILE *stream, const char *format, va_list arg);
    - int vsprintf(char *str, const char *format, va_list arg);
    - int vsnprintf(char *str, size_t size, const char *format, va_list arg);

2. Character Input/Output Functions:
    - int getchar(void);
    - int getc(FILE *stream);
    - int fgetc(FILE *stream);
    - char *gets(char *str);  // Deprecated
    - char *fgets(char *str, int n, FILE *stream);
    - int putchar(int char);
    - int putc(int char, FILE *stream);
    - int fputc(int char, FILE *stream);
    - int puts(const char *str);
    - int fputs(const char *str, FILE *stream);

3. File Handling Functions:
    - FILE *fopen(const char *filename, const char *mode);
    - FILE *freopen(const char *filename, const char *mode, FILE *stream);
    - int fclose(FILE *stream);
    - int fflush(FILE *stream);

4. File Positioning Functions:
    - int fseek(FILE *stream, long int offset, int whence);
    - long int ftell(FILE *stream);
    - void rewind(FILE *stream);
    - int fgetpos(FILE *stream, fpos_t *pos);
    - int fsetpos(FILE *stream, const fpos_t *pos);

5. Error Handling Functions:
    - void clearerr(FILE *stream);
    - int feof(FILE *stream);
    - int ferror(FILE *stream);
    - void perror(const char *str);

6. Direct Input/Output Functions:
    - size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
    - size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);

7. Temporary File Functions:
    - FILE *tmpfile(void);
    - char *tmpnam(char *str);

8. Miscellaneous Functions:
    - int remove(const char *filename);
    - int rename(const char *old_filename, const char *new_filename);
    - void setbuf(FILE *stream, char *buffer);
    - int setvbuf(FILE *stream, char *buffer, int mode, size_t size);
*/