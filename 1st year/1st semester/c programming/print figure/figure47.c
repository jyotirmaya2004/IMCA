#include<stdio.h>
int main()
{
    int a,i,j,k;
    printf("enter any number ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {     
        for(k=a-1;k>=i;k--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }   
        printf("\n");
    }
}                                                                                                                            