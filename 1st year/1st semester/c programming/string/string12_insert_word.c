#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[30],c[20];
    int i,j=0,co=0,po;
    printf("Enter a sentence : ");
    gets(a);
    printf("Enter a word to be insert : ");
    gets(b);
    printf("\nEnter the position : ");
    scanf("%d",&po);
    printf("Display both : \n");
    puts(a);
    puts(b);
    int l=strlen(a)+strlen(b)+1;
    for(i=strlen(a)-1;i>=po;i--)
    {
        a[i+strlen(b)+1]=a[i];
    }
    for ( i = 0;b[i]!='\0'; i++)
    {
        a[po++]=b[i];
    }
    a[po]=' ';
    a[l+1]='\0';
    printf("The new sentence : ");
    puts(a);
    
    

}