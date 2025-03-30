#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    printf("Enter a sentence : ");
    gets(a);
    int j=0,l;
    for (int i = 0; i <= strlen(a); i++)
    {
        if(a[i]!=32&&a[i]!='\0')
            b[j++]=a[i];
        else
        {
            b[j]='\0';
            fflush(stdin);
            l=strlen(b);
            if(l>2)
            {
                printf("%s\n",b);
            }
            j=0;
        }
    }
    
}