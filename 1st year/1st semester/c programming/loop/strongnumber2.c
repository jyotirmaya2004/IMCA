#include<stdio.h>
int main()
{
    int x,k,n;
    printf("Enter any number ");
    scanf("%d",&n);
    int i,dg;
    int num=n;
    int y,sum=0;
    for(int k=1;k<=100;k++){
    for(i=1;k>0;i++){
        dg=k%10;
        y=1;
        for(x=1;x<=dg;x++){
         y=y*x; 
         printf("%d ",y);}
         k=k/10;
         
         sum=sum+y;
    }
    printf("%d ",sum);
    if(k==sum)
        printf("%d is a strong number \n",sum);
    else
        printf("%d is not a strong number\n",sum);}
}