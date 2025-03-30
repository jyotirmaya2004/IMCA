#include<stdio.h>
int main()
{
    int n;
    printf("Enter row number : ");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            printf("%d ",j+1);
        }
        for(int k=1;k<(n-i)*2;k++)
        {
            printf("  ");
        }
        if(i==n)
        {
            for(int j=i-1;j>=1;j--)
            {
                printf("%d ",j);
            }
        }
        else
        {
            for(int j=i;j>=1;j--)
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
}