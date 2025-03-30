#include<stdio.h>
int main()
{
    int n;
    printf("Enter row number :  ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            printf("  ");
        }
        for(int k=i;k>=1;k--)
        {
            printf("%d ",k);
        }
    printf("\n");
    }
}