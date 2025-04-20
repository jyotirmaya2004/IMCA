#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *fp=NULL;
    fp = fopen("text.txt", "a+");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    char ch;
	printf("Enter your text (End text using EOF mark): ");
	while((ch=getchar())!=EOF)
	{
		putc(ch,fp);
	}
    fclose(fp);
    return 0;
}
