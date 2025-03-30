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
    for ( i = 0;i<strlen(s); i++)
    {
        if (s[i]>=65&&s[i]<=90)
        {
            s[i]=s[i]+32;
        }
        else if (s[i]>=97&&s[i]<=122)
        {
            s[i]=s[i]-32;
        }
        
    }
    printf("The new string : ");
    puts(s);
    
}