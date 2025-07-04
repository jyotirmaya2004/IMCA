#include <stdio.h>
#define MAX 100
int stack[MAX], top = -1;
void push(int val)
{
    if (top == MAX - 1)
        printf("Overflow\n");
    else
        stack[++top] = val;
}
int pop()
{
    if (top == -1)
    {
        printf("Underflow\n");
        return -1;
    }
    return stack[top--];
}
int main()
{
    push(10);
    push(20);
    printf("Popped: %d\n", pop());
    return 0;
}