#include<stdio.h>
int main()
{
    int a,b,i,l;
    printf("Enter two number to find LCM : ");
    scanf("%d%d",&a,&b);
    for(i<=a*b;i>=a&&i>=b;--i){
        if(i%a==0&&i%b==0){
        //printf("%d ",i);
        l=i;
        }
    }

    printf("\nLCM of %d and %d is %d",a,b,l);

}