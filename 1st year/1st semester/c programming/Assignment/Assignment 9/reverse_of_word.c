#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    printf("enter a word : ");
    scanf("%s",&c);
    int len;
    len=strlen(c);
    for(int i=0;i<len/2;i++)
    {
        char temp=c[i];
        c[i]=c[len-i-1];
        c[len-i-1]=temp;

    }
    printf("\nReverse of word : %s",c);

}