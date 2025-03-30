// Jyoitrmaya Behera=J.B.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[50],c[50];
    printf("Enter your name : ");
    gets(a);
    int j=0;
    for (int i = 0; i <=strlen(a); i++)
    {
        if(a[i]!=32&&a[i]!='\0')
            c[j++]=a[i];
        else{
            c[j]='\0';
            if(a[i]=='\0')
            {
                printf("%c.%c.",toupper(a[0]),toupper(c[0]));
            }
            j=0;
            }
    }
}