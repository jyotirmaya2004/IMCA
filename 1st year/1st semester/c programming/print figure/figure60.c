#include<stdio.h>
int main()
{
    int n=7;
    // printf("Enter any number : ");
    // scanf("%d",&n);
    int x=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if (j<=x||j>=n-x+1)
            {
                printf("%d ",j);
            }
            else
                printf("  ");
            
        }
        if(i<=n/2)
            x++;
        else    
            x--;
        printf("\n");
    }
    

}