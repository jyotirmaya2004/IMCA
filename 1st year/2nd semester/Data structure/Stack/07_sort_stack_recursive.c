#include <stdio.h>
#define MAX 100
int stack[MAX], top = -1;
void push(int val) { stack[++top] = val; }
int pop() { return stack[top--]; }
void insertSorted(int val)
{
    if (top == -1 || val > stack[top])
    {
        push(val);
        return;
    }
    int temp = pop();
    insertSorted(val);
    push(temp);
}
void sortStack()
{
    if (top != -1)
    {
        int temp = pop();
        sortStack();
        insertSorted(temp);
    }
}
int main()
{
    push(3);
    push(1);
    push(4);
    push(2);
    sortStack();
    while (top != -1)
        printf("%d ", pop());
    return 0;
}