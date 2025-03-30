#include<stdio.h>
void main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    int rem=1,n1=n,count=0;
    while(n>0){
        rem=n%10;
        n=n/10;
        count++;
    }
    int sum=0; 
    rem=1,n=n1;
    while(n>0){
        rem=n%10;
        int t=1;
        for (int i = 0; i < count; i++)
        {
            t*=rem;
        }
        
        sum+=t;
        n=n/10;
    }
    if(n1==sum){
        printf("%d is a armstromg number\n",n1);
    }
    else
        printf("%d is not a armstromg number\n",n1);

}