#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],c[50];
    printf("Enter your name : ");
    gets(a);
    int j=0;
    printf("The middle word of your name : \"");
    for (int i = 0; i <=strlen(a); i++)
    {
        if(a[i]!=32&&a[i]!='\0')
            c[j++]=a[i];
        else{
            c[j]='\0';
            if(a[i]!='\0'&&a[i-j-1]==32)
            {
                puts(c);
            }
            j=0;
            }
    }
    printf("\"");
}