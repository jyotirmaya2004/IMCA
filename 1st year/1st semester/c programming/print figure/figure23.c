#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter a number ");
    scanf("%d",&a);
    int n;
    for(i=1;i<=a;i++){
        if(i%2!=0)n=1;
        else n=0;
        for(j=1;j<=i;j++){
            printf("%d ",n);
            if(n==1)n=0;
            else n=1;
        
       // printf("* ");
         }
        printf("\n");
    }
}