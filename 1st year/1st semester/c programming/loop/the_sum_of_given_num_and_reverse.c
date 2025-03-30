#include<stdio.h>
int main()
{
    int n,r=0,sum,n1;
    printf("enter a number: ");
    scanf("%d",&n);
    n1=n;
    while(n>0){
        r =r*10;
        r =r+(n%10);
        n=n/10;

    }
    sum=n1+r;
    printf("The sum of given number and its reverse = %d",sum);

    


}