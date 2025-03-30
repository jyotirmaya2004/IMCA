#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[30],c[20];
    int i,j=0,l=0;
    printf("Enter a sentence : ");
    gets(a);
    printf("Display sentence : \n");
    puts(a);
    for ( i = 0; i <=strlen(a); i++)
    {
        if(a[i]!=32&&a[i]!='\0')
            c[j++]=a[i];
        else{
            c[j]='\0';
            if(strlen(c)>l)
            {
                strcpy(b,c);
                l=strlen(c);
            }
            j=0;
            }
    }
    printf("\nThe longest word = %s\nThe length of longest word = %d",b,l);
    

}