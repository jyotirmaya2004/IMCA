#include<stdio.h>
int main()
{
    int i,oc=0,ec=0,f,t;
    printf("the number which are divisible by 5 and 7\n");
    printf("from :");scanf("%d",&f);
    printf("to :");scanf("%d",&t);
    printf("the number which are divisible by 5 and 7 are : ");
    for(i=f;i<=t;i++){
        if(i%5==0&&i%7==0)
        printf("%d ",i);
    }

}