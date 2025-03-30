#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter length of rectangle ");
    scanf("%d",&m);
    printf("Enter breadth of rectangle ");
    scanf("%d",&n);
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(i==1||i==m||j==n||j==1){
            printf("* ");}
            else
            printf("  ");
        
       // printf("* ");
         }
        printf("\n");
    }
}