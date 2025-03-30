#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    do{
       sum=sum+i;
       i=i+1;
    }while(i<=n);
    printf("the sum of first n number = %d",sum);
}