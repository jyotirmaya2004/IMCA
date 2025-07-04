#include <stdio.h>
#define MAX 100
int stack[MAX], minStack[MAX], top = -1, minTop = -1;
void push(int val)
{
    stack[++top] = val;
    if (minTop == -1 || val <= minStack[minTop])
        minStack[++minTop] = val;
}
int pop()
{
    int val = stack[top--];
    if (val == minStack[minTop])
        minTop--;
    return val;
}
int getMin() { return minStack[minTop]; }
int main()
{
    push(4);
    push(2);
    push(5);
    push(1);
    printf("Min: %d\n", getMin());
    pop();
    printf("Min: %d\n", getMin());
    return 0;
}