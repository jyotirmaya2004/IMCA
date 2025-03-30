#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("Enter your name : ");
    gets(a);
    for (int i = 0;i<strlen(a)&&a[i]!=32; i++)
    {
        printf("%c",a[i]);
    }
    
}