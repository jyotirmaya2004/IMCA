#include<stdio.h>
int main()
{
    int a[3][3],r,c;
    printf("Enter data to the matrix- ");
    for (r=0;r<3;r++)
    {
        for (c=0;c<3;c++)
        {
            scanf("%d",&a[r][c]);
        }
        
    }
    printf("\nThe matrix : \n");
    for (r=0;r<3;r++)
    {
        for (c=0;c<3;c++)
        {
            printf("%d ",a[r][c]);
        }
        printf("\n");
        
    }
    printf("\nDisplay the upper triangle : \n");
    for (r=0;r<3;r++)
    {
        for (c=0;c<3;c++)
        {
            if (r<=c)
            {
                printf("%d ",a[r][c]);
            }
            else
                printf("  ");
            
        }
        printf("\n");
        
    }
    
}