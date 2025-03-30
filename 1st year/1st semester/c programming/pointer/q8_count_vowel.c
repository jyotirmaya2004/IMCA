#include <stdio.h>
int countVowels(char *str) {
    int count = 0;
    while (*str) {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
            count++;
        str++;
    }
    return count;
}
int main() {
    char str[] = "Pointer Example";
    printf("Vowel count: %d\n", countVowels(str));
    return 0;
}
