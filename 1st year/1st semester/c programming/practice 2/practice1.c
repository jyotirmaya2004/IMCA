#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr=NULL;
	fptr=fopen("text.txt","w");
	if(fptr==NULL)
	{
		perror("Error opening file");
        return 1;
	}
	char ch;
	printf("Enter your text (End text using EOF mark): ");
	while((ch=getchar())!=EOF)
	{
		putc(ch,fptr);
	}
	fclose(fptr);
}