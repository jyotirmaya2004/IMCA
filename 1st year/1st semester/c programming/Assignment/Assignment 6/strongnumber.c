#include<stdio.h>
int main()
{
    int x,n;
    printf("Enter any number ");
    scanf("%d",&n);
    int i,dg;
    int num=n;
    int y,sum=0;
    for(i=1;n>0;i++){
        dg=n%10;
        y=1;
        for(x=1;x<=dg;x++){
         y=y*x; 
         n=n/10;
         
         sum=sum+y;
        }
    }
    printf("%d ",sum);
    if(num==sum)
        printf("%d is a strong number \n",num);
    else
        printf("%d is not a strong number\n",num);
}