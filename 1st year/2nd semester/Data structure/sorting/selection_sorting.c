#include<stdio.h>
#include<stdlib.h>
int i,j;
void input(int *a,int num)
{
    printf("Enter element to array : \n");
    for(i=0;i<num;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",&a[i]);
    }
}

void display(int *b,int num)
{
    printf("Array elements are: \n");
    for(i=0;i<num;i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
}
void sorting(int *arr,int n)
{
    // insertion sort algorithm
    for(i=0; i<n-1; i++) 
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
        
    }
}

int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    input(arr,n);
    display(arr,n);
    sorting(arr,n);
    display(arr,n);
}