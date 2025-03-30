// Online C compiler to run C program online
#include<stdio.h>
int main()
{
    int n;
    printf("Enter middile element of diagram : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=i+1;k++)
        {
            printf("%d ",k);
        }
        for(int l=i;l>=1;l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<n-i;k++)
        {
            printf("%d ",k);
        }
        for(int l=n-2;l>i;l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
}