#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i,p,c=0;
    printf("Enter a word : ");
    gets(s);
    printf("Display the string : ");
    puts(s);
    printf("Enter a character to be delete : ");
    char ch;
    scanf("%c",&ch);
    printf("Enter position : ");
    scanf("%d",&p);
    for ( i = p;i<=strlen(s); i++)
    {
        s[i-1]=s[i];
    }
    printf("The new word : ");
    puts(s);
    
}