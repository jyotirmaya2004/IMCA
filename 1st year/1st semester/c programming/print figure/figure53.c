#include<stdio.h>
int main()
{
    int a,i,j,k;
    printf("enter any number ");
    scanf("%d",&a);
    int z=1;
    for(i=1;i<=a;i++)
    {     
        for(k=a-1;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=z;j++)
        {
            printf("%d",z);
        } 
        z+=2;  
        printf("\n");
    }
}                                                                                                                            