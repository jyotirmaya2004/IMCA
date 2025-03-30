#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    int i,j=0,c=0;
    printf("Enter 1st string : ");
    gets(a);
    printf("Enter 2nd string : ");
    gets(b);
    printf("\nDisplay both the strings : \n");
    puts(a);
    // printf("\n");
    puts(b);
    int l1=strlen(a);
    int l2=strlen(b);
    for ( i = l1;i<=l1+l2+1; i++)
    {
        if(i==l1)
            a[l1]=' ';
        else
            a[i]=b[j++];
    }
    printf("Concatenation of two string : ");
    puts(a);
    
}