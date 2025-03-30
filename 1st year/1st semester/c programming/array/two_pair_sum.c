#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter range of Array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter numbers to array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter wanted sum pair : ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        for (int j = i; j < n; j++)
        {
            if(a[i]+a[j]==x)
            printf("(%d,%d)",a[i],a[j]);
        }
        
    }
    
}