#include<stdio.h>
#include<string.h>
int main()
{
    char s[50],t[50];
    int i,c=0;
    printf("Enter a string 1 : ");
    gets(s);
    printf("\nDisplay the string : ");
    puts(s);
    int j=0;
    for (int i = strlen(s)-1; i >=0; i--)
    {
        t[j++]=s[i];
    }
    t[j]='\0';
    printf("The revrse of string %s : ",s);
    puts(t);
    if(strcmp(s,t)==0)
        printf("\npalindrome");
    else
        ("\nNot palindrome");
}