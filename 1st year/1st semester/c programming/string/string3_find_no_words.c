#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i,c=0;
    printf("Enter a string : ");
    gets(s);
    printf("\nDisplay the string : ");
    puts(s);
    for ( i = 0;s[i]!='\0'; i++)
    {
        if(s[i]==32)
            c++;
    }
    printf("The no of space : %d\nThe number of words : %d",c,c+1);
    
}