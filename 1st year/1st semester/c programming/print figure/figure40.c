#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter any row number ");
    scanf("%d",&a);
    for(i=0;i<=a-1;i++)
    {
        for(j=a-i;j<=a;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

}