#include<stdio.h>
int main()
{   
    int n,r,j;
    printf("Enter a number: ");
    scanf("%d",&j);
    int a=0;
    for(int j=1;j<=r;j++){
        n=3;
    for(int i=2;i<=j;i++){
     if(n%i==0){
     a=1;
     break;}
     n++;}
    if(a==0)printf("%d ",j);
    printf("\n");
    }
}