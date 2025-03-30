#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter any number : ");
    scanf("%d",&n);
    int n1=n;
    int co=0,dg=0;
    int a[100],b[100];
    for(int i=0;n>0;i++)
    {
        dg=n%10;
        a[i]=dg;
        co++;
        n/=10;
    }
    int j=0;
    for (int i = co-1; i >=0; i--)
    {
        b[j++]=a[i];
    }
    
    printf("\n%d in words : ",n1);
    for (int i = 0; i < co; i++)
    {
        switch(b[i])
        {
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
            case 0:
                printf("Zero ");
                break;   
        }
    }
}