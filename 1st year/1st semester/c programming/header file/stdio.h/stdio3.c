/*Input/Output Functions:
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
// This is the file path where the source code file is located
// The file is named stdio3.c and is located in the stdio.h directory
// within the "header file" directory of the "c programming" folder
// under the "IMCA" directory on the C: drive
 
// This line appears to be a misplaced or incomplete comment block
*/
#include <stdio.h>
#include <stdarg.h>

void demo_vprintf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

void demo_vfprintf(FILE *stream, const char *format, ...) {
    va_list args;
    va_start(args, format);
    vfprintf(stream, format, args);
    va_end(args);
}

void demo_vsprintf(char *str, const char *format, ...) {
    va_list args;
    va_start(args, format);
    vsprintf(str, format, args);
    va_end(args);
}

void demo_vsnprintf(char *str, size_t size, const char *format, ...) {
    va_list args;
    va_start(args, format);
    vsnprintf(str, size, format, args);
    va_end(args);
}

int main() {
    // printf
    printf("This is a printf example: %d\n", 42);

    // fprintf
    FILE *file = fopen("output.txt", "w");
    if (file != NULL) {
        fprintf(file, "This is a fprintf example: %s\n", "Hello, World!");
        fclose(file);
    }

    // sprintf
    char buffer[100];
    sprintf(buffer, "This is a sprintf example: %.2f", 3.14159);
    printf("%s\n", buffer);

    // snprintf
    snprintf(buffer, sizeof(buffer), "This is a snprintf example: %d", 12345);
    printf("%s\n", buffer);

    // scanf
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);

    // fscanf
    file = fopen("input.txt", "r");
    if (file != NULL) {
        fscanf(file, "%d", &num);
        printf("Number read from file: %d\n", num);
        fclose(file);
    }

    // sscanf
    char str[] = "123 456";
    int a, b;
    sscanf(str, "%d %d", &a, &b);
    printf("Numbers read from string: %d, %d\n", a, b);

    // vprintf
    demo_vprintf("This is a vprintf example: %s\n", "Hello, vprintf!");

    // vfprintf
    file = fopen("output_vfprintf.txt", "w");
    if (file != NULL) {
        demo_vfprintf(file, "This is a vfprintf example: %d\n", 2023);
        fclose(file);
    }

    // vsprintf
    demo_vsprintf(buffer, "This is a vsprintf example: %c", 'A');
    printf("%s\n", buffer);

    // vsnprintf
    demo_vsnprintf(buffer, sizeof(buffer), "This is a vsnprintf example: %s", "Hello, vsnprintf!");
    printf("%s\n", buffer);

    return 0;
}