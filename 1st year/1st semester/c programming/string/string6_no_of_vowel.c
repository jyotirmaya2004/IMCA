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
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'
        ||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            c++;
        }
        
    }
    printf("The number of vowel in string : %d",c);
    
}