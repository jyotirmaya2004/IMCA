#include<stdio.h>
int main()
{
    int n1,n2,n3,n4;
    printf("Enter row number of matrix 1 : ");
    scanf("%d",&n1);
    printf("Enter coloumn number of matrix 1 : ");
    scanf("%d",&n2);
    int a[n1][n2],r,c;
    printf("Enter data to the matrix 1 = ");
    for (r=0;r<n1;r++)
    {
        for (c=0;c<n2;c++)
        {
            scanf("%d",&a[r][c]);
        }
        
    }
    printf("\nThe matrix 1 : \n");
    for (r=0;r<n1;r++)
    {
        for (c=0;c<n2;c++)
        {
            printf("%d ",a[r][c]);
        }
        printf("\n");
        
    }
    printf("Enter row number of matrix 2 : ");
    scanf("%d",&n3);
    printf("Enter coloumn number of matrix 2 : ");
    scanf("%d",&n4);
    int b[n3][n4];
    printf("Enter data to the matrix 2 = ");
    for (r=0;r<n3;r++)
    {
        for (c=0;c<n4;c++)
        {
            scanf("%d",&b[r][c]);
        }
        
    }
    printf("\nThe matrix 2 : \n");
    for (r=0;r<n3;r++)
    {
        for (c=0;c<n4;c++)
        {
            printf("%d ",b[r][c]);
        }
        printf("\n");
        
    }
    if(n2==n3)
    {
        printf("\nThe resultant matrix is : \n");
        int res[n2][n3];
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n4;j++)
            {
                res[i][j]=0;
                for (int k = 0; k < n2; k++)
                {
                    res[i][j]+=a[i][k]*b[k][j];
                }
                printf("%d ",res[i][j]);
                
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nThe multiplication process is not possible");
    }
    
    
}