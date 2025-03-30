#include <stdio.h>
#include <string.h>

int main() {
    char a[50], b[30], c[20];
    int i, k, j = 0, len_a, len_b;

    printf("Enter a sentence : ");
    gets(a);
    len_a = strlen(a);

    printf("Enter a word to be deleted : ");
    gets(b);
    len_b = strlen(b);

    printf("Display both : \n");
    puts(a);
    puts(b);

    i = 0;
    while(i < len_a) {
        j = 0;
        while(i + j < len_a && a[i + j] != ' ') {
            c[j] = a[i + j];
            j++;
        }
        c[j] = '\0';

        if(strcmp(c, b) == 0) {
            for(k = i; k < len_a - j; k++) {
                a[k] = a[k + j + 1];
            }
            len_a -= j + 1;
        } 
        else {
            i += j + 1;
        }
    }

    a[len_a] = '\0';

    printf("The new sentence : ");
    puts(a);

    return 0;
}