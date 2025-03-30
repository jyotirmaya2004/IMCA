#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number to check happy number : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        int dg=0;
        int sum=0;
        while (n>0)
        {
            dg=n%10;
            sum+=(dg*dg);
            n/=10;
        }
        n=sum;
        
        
    }
    if (n==1)
    {
        printf("Yes");
    }
    else
        printf("no");
    
}
/*
Example 1: Checking if 19 is a Happy Number
Step-by-Step Calculation:
19 → (1² + 9²) = 1 + 81 = 82
82 → (8² + 2²) = 64 + 4 = 68
68 → (6² + 8²) = 36 + 64 = 100
100 → (1² + 0² + 0²) = 1
Since we reached 1, 19 is a Happy Number.


*/