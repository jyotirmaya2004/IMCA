#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello, World!";
    char str2[100];
    char str3[100];
    char *result;

    // 1. strlen: Calculate the length of a string
    printf("1. strlen: Length of '%s' is %zu\n", str1, strlen(str1));

    // 2. strcpy: Copy a string
    strcpy(str2, str1);
    printf("2. strcpy: str2 after copying str1: '%s'\n", str2);

    // 3. strcat: Concatenate two strings
    strcat(str2, " Welcome to C!");
    printf("3. strcat: str2 after concatenation: '%s'\n", str2);

    // 4. strcmp: Compare two strings
    if (strcmp(str1, str2) ){
        printf("4. strcmp: '%s' and '%s' are NOT equal\n", str1, str2);
    } else {
        printf("4. strcmp: '%s' and '%s' are equal\n", str1, str2);
    }

    // 5. strchr: Find the first occurrence of a character in a string
    result = strchr(str1, 'W');
    if (result) {
        printf("5. strchr: 'W' found in '%s' at position: '%s'\n", str1, result);
    } else {
        printf("5. strchr: 'W' not found in '%s'\n", str1);
    }

    // 6. strstr: Find the first occurrence of a substring in a string
    result = strstr(str1, "World");
    if (result) {
        printf("6. strstr: 'World' found in '%s' at position: '%s'\n", str1, result);
    } else {
        printf("6. strstr: 'World' not found in '%s'\n", str1);
    }

    // 7. strtok: Tokenize a string
    printf("7. strtok: Tokenizing '%s' by space:\n", str1);
    result = strtok(str1, " ,!");
    while (result != NULL) {
        printf("   Token: %s\n", result);
        result = strtok(NULL, " ,!");
    }

    // 8. strncpy: Copy first n characters of a string
    strncpy(str3, str2, 5);
    str3[5] = '\0'; // Null-terminate the string
    printf("8. strncpy: First 5 characters of '%s' copied to str3: '%s'\n", str2, str3);

    // 9. strncat: Concatenate first n characters of a string
    strncat(str3, "!!!", 2);
    printf("9. strncat: str3 after concatenating 2 characters: '%s'\n", str3);

    // 10. strncmp: Compare first n characters of two strings
    if (strncmp(str1, str2, 5) == 0) {
        printf("10. strncmp: First 5 characters of '%s' and '%s' are equal\n", str1, str2);
    } else {
        printf("10. strncmp: First 5 characters of '%s' and '%s' are NOT equal\n", str1, str2);
    }

    // 11. strrchr: Find the last occurrence of a character in a string
    result = strrchr(str2, 'o');
    if (result) {
        printf("11. strrchr: Last 'o' found in '%s' at position: '%s'\n", str2, result);
    } else {
        printf("11. strrchr: 'o' not found in '%s'\n", str2);
    }

    // 12. strpbrk: Find the first occurrence of any character from a set in a string
    result = strpbrk(str2, "aeiou");
    if (result) {
        printf("12. strpbrk: First vowel found in '%s' at position: '%s'\n", str2, result);
    } else {
        printf("12. strpbrk: No vowels found in '%s'\n", str2);
    }

    // 13. strspn: Find the length of the initial segment of a string containing only characters from a set
    size_t len = strspn(str2, "Helo, Wrd!");
    printf("13. strspn: Length of initial segment of '%s' containing only 'Helo, Wrd!': %zu\n", str2, len);

    // 14. strcspn: Find the length of the initial segment of a string not containing any characters from a set
    len = strcspn(str2, "aeiou");
    printf("14. strcspn: Length of initial segment of '%s' without vowels: %zu\n", str2, len);

    // 15. memcpy: Copy a block of memory
    char src[50] = "This is a test.";
    char dest[50];
    memcpy(dest, src, strlen(src) + 1); // +1 to include the null terminator
    printf("15. memcpy: dest after copying src: '%s'\n", dest);

    return 0;
}







/*1. strlen: Length of 'Hello, World!' is 13
2. strcpy: str2 after copying str1: 'Hello, World!'
3. strcat: str2 after concatenation: 'Hello, World! Welcome to C!'
4. strcmp: 'Hello, World!' and 'Hello, World! Welcome to C!' are NOT equal
5. strchr: 'W' found in 'Hello, World!' at position: 'World!'
6. strstr: 'World' found in 'Hello, World!' at position: 'World!'
7. strtok: Tokenizing 'Hello, World!' by space:
   Token: Hello
   Token: World
8. strncpy: First 5 characters of 'Hello, World! Welcome to C!' copied to str3: 'Hello'
9. strncat: str3 after concatenating 2 characters: 'Hello!!'
10. strncmp: First 5 characters of 'Hello' and 'Hello, World! Welcome to C!' are equal
11. strrchr: Last 'o' found in 'Hello, World! Welcome to C!' at position: 'o C!'
12. strpbrk: First vowel found in 'Hello, World! Welcome to C!' at position: 'ello, World! Welcome to C!'
13. strspn: Length of initial segment of 'Hello, World! Welcome to C!' containing only 'Helo, Wrd!': 13
14. strcspn: Length of initial segment of 'Hello, World! Welcome to C!' without vowels: 1
15. memcpy: dest after copying src: 'This is a test.'*/