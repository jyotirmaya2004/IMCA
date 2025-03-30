#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter a number ");
    scanf("%d",&a);
    for(j=1;j<=a;j++){
    int a=0;
    int b=1;
    int sum=0;
    for(int i=1;i<=j;i++){
        sum=a+b;
        printf("%d ",a);
        a=b;
        b=sum;
         }
        printf("\n");
    }
    return 0;
}