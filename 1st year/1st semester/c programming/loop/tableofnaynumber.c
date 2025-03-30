#include<stdio.h>
int main()
{   
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    int n=1;
    for(int i=a;i<=(a*10);i=i+a)
     printf("\n%d*%d=%d ",a,n++,i);
     

    return 0;
}