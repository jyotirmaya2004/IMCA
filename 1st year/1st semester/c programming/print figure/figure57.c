#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n;
    printf("Enter any odd number for row number: ");
    scanf("%d",&n);
    int size=(n+1)/2;
    for(i=size;i>=-size;i--)
    {
        for(j=size;j>= abs(i);j--)
        {
            printf("%d ",j+1);

        }
        printf("\n");
    }
}