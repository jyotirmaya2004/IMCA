/*increasing after call*/
#include<stdio.h>
void increase(int n)
{
   if(n==0) return;
   increase(n-1);
   printf("%d\n",n);
   return; 
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    increase(n);
    return 0;
}