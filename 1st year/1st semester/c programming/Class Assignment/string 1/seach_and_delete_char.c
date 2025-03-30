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
    int l=strlen(s);
    int f=0;
    for (int i = 0; i < l; i++)
    {
        if (s[i]==ch)
        {
            f++;
        }
        
    }
    if(f==0)
    {
        printf("%c is not found",ch);
        return 0;
    }
    
    for(int k=0;k<strlen(s);k++)
    {
        if(s[k]==ch)
        {
            for ( i = k;i<strlen(s); i++)
            {
                s[i]=s[i+1];
            }
            i--;
            l--;
        }
    }
    printf("The new word : ");
    puts(s);
    
}