#include <stdio.h>
#define MAX 100
int stack[MAX], top = -1;
void nextGreater(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        while (top != -1 && arr[i] > arr[stack[top]])
        {
            int idx = stack[top--];
            printf("%d -> %d\n", arr[idx], arr[i]);
        }
        stack[++top] = i;
    }
    while (top != -1)
        printf("%d -> -1\n", arr[stack[top--]]);
}
int main()
{
    int arr[] = {4, 5, 2, 25};
    nextGreater(arr, 4);
    return 0;
}