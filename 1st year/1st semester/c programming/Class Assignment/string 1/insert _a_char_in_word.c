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
    printf("Enter a character to be insert : ");
    char ch;
    scanf("%c",&ch);
    printf("Enter position : ");
    scanf("%d",&p);
    for ( i = strlen(s);i>=p-1; i--)
    {
        s[i+1]=s[i];
    }
    s[p-1]=ch;
    printf("The new word : ");
    puts(s);
    
}