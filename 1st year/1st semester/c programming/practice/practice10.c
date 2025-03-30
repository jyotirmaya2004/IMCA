#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i==1||(i==n&&j<=n/2+1)||j==n/2+1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        
    }
}