#include<stdio.h>
int main()
{
    int n,r=0;
    printf("enter a number: ");
    scanf("%d",&n);
    int n1=n;
    while(n>0){
        r = r*10;
        r = r +(n%10);
        n=n/10;

    }
    printf("the reverse of the number %d is %d",n1,r);
    if(n1==r)
        printf("\n%d is a palindromic sequence",n1);
    else
        printf("\n%d is not a palindromic sequence",n1);


}