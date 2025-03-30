#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter any odd number ");
    scanf("%d",&a);
    for(i=1;i<=(a/2)+1;i++)
    {   int k=1;
        for(j=1;j<=a;j++)
        {     
                if(j>=(((a/2)+2)-i)&&j<=(a/2)+i){
                    if(k==1){
                        printf("*");
                        k=0;
                    }
                    else{
                        printf(" ");
                        k=1;
                    }

                }
                else
                printf(" ");
        }
        printf("\n");
    }
}                                                                                                                            