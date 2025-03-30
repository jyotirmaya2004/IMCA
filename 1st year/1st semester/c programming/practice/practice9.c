#include<stdio.h>
#include<math.h>
int main()
{
    int f,n;
    printf("Enter row number : ");
    scanf("%d",&n);
    f=(n+1)/2;
    for(int i=-f;i<=f;i++)
    {
        int a=abs(i);
        for(int j=a;j>0;j--)
        {
            printf("  ");
        }
        for(int k=1;k<=(f+1)- a;k++)
        {
            printf("%d ",k);
        }
        for(int l= f-a;l>=1;l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
}