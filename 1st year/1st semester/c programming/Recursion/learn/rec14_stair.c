#include<stdio.h>
int ways(int n)
{
    if(n<=2) return n;
    return ways(n-1)+ways(n-2);
}
int main()
{
    int n;
    printf("Enter the number of stair : ");
    scanf("%d",&n);
    int step=ways(n);
    printf("Total ways to reaches %d stair from bottom : %d",n,step);
}