#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter a number ");
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        for(j=1;j<=a-i;j++){
        printf("%d ",j);
         }
        printf("\n");
    }
}