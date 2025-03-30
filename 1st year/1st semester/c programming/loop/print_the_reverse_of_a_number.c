#include<stdio.h>
int main()
{
    int n,dg,count=0,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("the reverse of the number %d is ",n);
    while(n>0){
        dg=n%10;
        printf("%d",dg);
        n=n/10;

    }
    


}