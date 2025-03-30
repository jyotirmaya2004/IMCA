#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=0;
    int b=1;
    printf("the fibonacci sequence are : %d ",a);
    for(int i=1;i<=n-1;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",a);
    }
    return 0;
}