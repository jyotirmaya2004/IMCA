#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter a number ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(int k=1;k<=i-1;k++){
            printf("  ");}

        for(j=1;j<=a+1-i;j++){
            if(i%2==0){
            printf("%c ",j+64);}
            else
            printf("%d ",j);
        
       // printf("* ");
         }
        printf("\n");
    }
}