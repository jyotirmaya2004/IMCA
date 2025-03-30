#include<stdio.h>
int main()
{
    int i,oc=0,ec=0,f,t;
    printf("print and count even and odd\n");
    printf("from :");scanf("%d",&f);
    printf("to :");scanf("%d",&t);
    for(i=f;i<=t;i++)
    if(i%2==0)
    {
        ec=ec+1;
        printf("%d is a even number\n",i);
    }
    else
    {
        oc =oc+1;
        printf("%d is a odd number\n",i);
    }
    printf("\n No of even numbers=%d",ec);
    printf("\n no of odd numbers =%d",oc);

}