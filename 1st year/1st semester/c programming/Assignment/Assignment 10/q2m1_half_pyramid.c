#include<stdio.h>
int main()
{
    int n;
    printf("Enter row or coloumn number : ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter element : ");
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix : \n");
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nThe half pyramid : \n");
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=j)
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }

}