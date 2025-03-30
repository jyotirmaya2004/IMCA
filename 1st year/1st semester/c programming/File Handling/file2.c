#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("%c",26);
    FILE *fileptr=NULL;
    char ch;
    fileptr=fopen("text.txt","w");
    while((ch=getchar())!=EOF)
    {
        putc(ch,fileptr);
    }
    fclose(fileptr);
}