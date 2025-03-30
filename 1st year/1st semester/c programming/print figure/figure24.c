#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter a number ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            int n;
            if((i+j)%2==0){
            n=1;
            printf("%d ",n);}
            else{
            n=0;
            printf("0 ");
            }
       // printf("* ");
         }
        printf("\n");
    }
}