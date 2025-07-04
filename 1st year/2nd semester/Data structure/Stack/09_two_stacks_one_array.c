#include <stdio.h>
#define MAX 100
int arr[MAX], top1 = -1, top2 = MAX;
void push1(int val)
{
    if (top1 < top2 - 1)
        arr[++top1] = val;
}
void push2(int val)
{
    if (top1 < top2 - 1)
        arr[--top2] = val;
}
int pop1() { return top1 >= 0 ? arr[top1--] : -1; }
int pop2() { return top2 < MAX ? arr[top2++] : -1; }
int main()
{
    push1(10);
    push2(20);
    printf("Pop1: %d\n", pop1());
    printf("Pop2: %d\n", pop2());
    return 0;
}