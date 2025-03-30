#include<stdio.h>
int table(int a,int i)
{
    if(i==11)
        return 0;
    else
    {
        printf("\n %d * %d= %d ",a,i,a*i);
        return table(a,i+1);
    }    
}
int main()
{
    int n;
    printf("Enter a number to find table : ");
    scanf("%d",&n);
    printf("\t\tTABLE OF %d",n);
    table(n,1);
}