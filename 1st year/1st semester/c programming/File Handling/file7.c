#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr=NULL;
    ptr=fopen("text.txt","w+");     
    if (ptr == NULL) {
        perror("Error opening file");
        return 1;
    }
    fputc('t',ptr);
    fputs("his is beautiful garden",ptr);
    fclose(ptr);
}