#include<stdio.h>
int main()
{
    int a,b,i,g;
    printf("Enter two number to find GCF : ");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;++i){
        if(a%i==0&&b%i==0){
        //printf("%d ",i);
        g=i;
        }
    }
    printf("\ngcf of %d and %d is %d",a,b,g);

}