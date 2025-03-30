#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter any odd number ");
    scanf("%d",&a);
    for(i=1;i<=(a/2)+1;i++)
    {   int n=1;
        for(j=1;j<=a;j++)
        {       
                if(j>=(((a/2)+2)-i)&&j<=(a/2)+i){
                printf("%c ",64+n);
                n++;}
                else
                printf("  ");
        }
        printf("\n");
    }

}