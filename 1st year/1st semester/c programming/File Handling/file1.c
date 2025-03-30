#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fileptr=NULL;
    char ch;
    fileptr=fopen("file2.c","r");
    while(1)
    {
        if((ch=fgetc(fileptr))!=EOF)
            printf("%c",ch);
        else
            break;
    }
    fclose(fileptr);
}