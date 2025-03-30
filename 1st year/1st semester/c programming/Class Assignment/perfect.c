#include<stdio.h>
int main()
{
    int n,s=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int i;
    int n1=n;
    printf("factor of %d are : ",n);
    for(i=1;i<n;i++){
        if(n%i==0){
        printf("%d ",i);
        s=s+i;}
    }
    if(n1==s)
     printf("\n%d is perfect number",s);
    else
     printf("\n%d is not a perfect number",n1);
}