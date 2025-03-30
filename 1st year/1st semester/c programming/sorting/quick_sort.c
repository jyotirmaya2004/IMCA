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
void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int* a,int l,int h)
{
    int index = l - 1;
    for (int i = l; i < h; i++) // Corrected loop condition
    {
        if (a[i] <= a[h])
        {
            index++;
            swap(&a[i], &a[index]);
        }
    }
    index++;
    swap(&a[h], &a[index]);
    return index;
}

void quick_sort(int* a, int l, int h) // Changed return type to void
{
    if (l < h) // Corrected condition placement
    {
        int pi = partition(a, l, h); // Moved partition call inside the condition
        quick_sort(a, l, pi - 1);
        quick_sort(a, pi + 1, h);
    }
}

int main()
{
    int n; 
    printf("Enter the size of the array : "); 
    scanf("%d", &n); 
    int *arr = (int*)malloc(n * sizeof(int)); 
    input(arr, n); 
    display(arr, n);
    quick_sort(arr, 0, n - 1);
    display(arr, n); // Display the array after sorting
    free(arr);
    return 0;
}