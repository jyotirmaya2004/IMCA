#include<stdio.h>
int main()
{
    int n,dg,count=0,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("the digit of the number %d : ",n);
    while(n>0){
        dg=n%10;
        sum=sum+dg;
        count++;
        printf("%d ",dg);
        n=n/10;

    }
    printf("\ntotal number of digit is %d and total sum of digit is %d",count,sum);


}