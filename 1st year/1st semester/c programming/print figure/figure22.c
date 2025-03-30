#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter a number ");
    scanf("%d",&a);
    int n=1;
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("%d ",n);
            n=n+2;
        
       // printf("* ");
         }
        printf("\n");
    }
}