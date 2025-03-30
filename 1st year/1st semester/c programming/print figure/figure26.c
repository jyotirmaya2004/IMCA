#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter a number ");
    scanf("%d",&a);
    int n=1;
    for(i=1;i<=a;i++)
    {
        for(int k=1;k<=a-i;k++)
        {
        printf("  ");
        }
        for(j=1;j<=a;j++)
        {
        printf("%d ",j);
        }
        printf("\n");
    }
}