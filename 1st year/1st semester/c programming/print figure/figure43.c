#include<stdio.h>
int main()
{
    int a,i,j,k;
    printf("enter any number ");
    scanf("%d",&a);
    for(i=0;i<=a-1;i++)
    {     
        for(k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(j=a-i;j>=1;j--)
        {
            printf("%c ",i+65);
        }   
        printf("\n");
    }
}