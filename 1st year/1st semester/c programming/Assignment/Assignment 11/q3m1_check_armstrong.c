#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number to check armstrong numbe ror not : ");
    scanf("%d",&n);
    int armstrong(int);
    int check;
    check=armstrong(n);
    if(check==1)
    {
        printf("%d is armstrong number \n",n);
    }
    else
    {
        printf("%d is not a armstrong number \n",n);
    }
}
int armstrong(int n)
{
    int rem=1,n1=n,count=0;
    while (n!=0)
    {
        rem=n%10;
        n=n/10;
        count++;

    }
    int i,sum=0;
    rem=1,n=n1;
    while(n>0)
    {
        rem=n%10;
        int t=1;
        for ( i = 0; i < count; i++)
        {
            t*=rem;
        }
        sum+=t;
        n/=10;
        
    }
    int arm;
    if(n1==sum)
        arm=1;
    else
        arm=0;
    return arm;
    
}