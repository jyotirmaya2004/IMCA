#include<stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <=4-i; j++)
        {
            printf("  ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%d ",k+1);
        }
        for (int l = i; l >=1; l--)
        {
            printf("%d ",l);
        }
        printf("\n");
        
        
        
    }
    
}