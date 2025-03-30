/*increasing after call*/
#include<stdio.h>
int sum=0;
int increase(int n)
{
    if(n==0) return 0;
    increase(n-1);
    sum+=n;
    return sum; 
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int s=increase(n);
    printf("%d",s);
    return 0;
}