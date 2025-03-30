#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr=NULL;
    ptr=fopen("text.txt","r");
    if (ptr == NULL) {
        perror("Error opening file");
        return 1;
    }
    char c=fgetc(ptr);
    printf("%c",c);
    c=fgetc(ptr);
    printf("%c",c);
    c=fgetc(ptr);
    printf("%c",c);
    c=fgetc(ptr);
    printf("%c",c);
    char str[20];
    fgets(str,20,ptr);
    printf("\nString : %s",str);
    fclose(ptr);
}