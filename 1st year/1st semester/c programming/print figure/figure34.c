#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter any odd number ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(int k=1;k<=a-i;k++){
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(int s=i-1;s>=1;s--){
            printf("%d ",s);
        }
        printf("\n");
    }

}