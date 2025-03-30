#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter row number of matrix : ");
    scanf("%d",&n1);
    printf("Enter coloumn number of matrix : ");
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
    printf("\nThe matrix : \n");
    for (r=0;r<n1;r++)
    {
        for (c=0;c<n2;c++)
        {
            printf("%d ",a[r][c]);
        }
        printf("\n");
        
    }
    int b[n2][n1];
    for (r = 0; r < n2; r++) {
        for (c = 0; c < n1; c++) {
            b[r][c] = a[c][r];
        }
    }
    printf("\nThe matrix : \n");
    for (r=0;r<n2;r++)
    {
        for (c=0;c<n1;c++)
        {
            printf("%d ",b[r][c]);
        }
        printf("\n");
        
    }
    printf("\n");
    
}