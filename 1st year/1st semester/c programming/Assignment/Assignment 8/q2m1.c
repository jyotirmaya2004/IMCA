#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,value=0;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        value+=pow(x,i);
    }
    
    printf("\nvalue of series f(%d) is : %d\n",x,value);

}

