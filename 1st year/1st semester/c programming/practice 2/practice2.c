#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fileptr=NULL;
    char ch;
    fileptr=fopen("text.txt","r");
	if(fileptr==NULL)
	{
		perror("Error opening file");
        return 1;
	}
    while((ch=fgetc(fileptr))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fileptr);
}