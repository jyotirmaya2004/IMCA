#include<stdio.h>
int main()
{
    int r,c,sum1,sum2;
    printf("Enter row no : ");
    scanf("%d",&r);
    printf("Enter column no : ");
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        printf("enter element for row number %d are \n",i+1);
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

    for(int i=0;i<r;i++)
    {
        sum1=0;
        for(int j=0;j<c;j++)
        {
            sum1 =sum1 + a[i][j];
        }
        printf("sum of row number %d = %d\n",i+1,sum1);
    }
    for(int j=0;j<c;j++)
    {
        sum2=0;
        for(int i=0;i<r;i++)
        {
            sum2 =sum2 + a[i][j];
        }
        printf("sum of column number %d = %d\n",j+1,sum2);
    }

}
