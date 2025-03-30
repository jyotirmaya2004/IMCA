#include <stdio.h>

int main() {
    // Using printf to print a message
    printf("Hello, World!\n");

    // Using fprintf to print to stderr
    fprintf(stderr, "This is an error message.\n");

    // Using sprintf to format a string
    char buffer[50];
    sprintf(buffer, "Formatted number: %d", 42);
    printf("%s\n", buffer);

    // Using scanf to read input
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);

    // Using fgets to read a string
    char str[100];
    fflush(stdin);
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("You entered: %s", str);

    // Using fputs to write a string
    fputs("This is a string written using fputs.\n", stdout);

    // Using fgetc to read a character
    printf("Enter a character: ");
    int ch = fgetc(stdin);
    printf("You entered: %c\n", ch);

    // Using putchar to print a character
    putchar('A');
    putchar('\n');

    // Using getchar to read a character
    printf("Press any key to continue...");
    getchar(); // To consume the newline character left by previous input
    getchar(); // To actually wait for user input

    return 0;
}