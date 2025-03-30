/*matrix*/
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter row no : ");
    scanf("%d",&r);
    printf("Enter column no : ");
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        printf("enter element for row number %d are ",i+1);
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}