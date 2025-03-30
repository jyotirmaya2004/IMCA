//Find occurance of a value in the array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter range of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array element : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Display array element : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int find,count=0;
    printf("\nEnter a number to find : ");
    scanf("%d",&find);

    for (int i = 0; i < n; i++)
    {
        if (find==arr[i])
        {
            count++;
        }
        
    }
    printf("\nThe number of occurance of %d is : %d ",find,count);
    
}