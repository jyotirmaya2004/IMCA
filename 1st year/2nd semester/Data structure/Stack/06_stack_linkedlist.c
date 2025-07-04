#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;
void push(int val)
{
    struct Node *temp = malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = top;
    top = temp;
}
int pop()
{
    if (!top)
        return -1;
    int val = top->data;
    struct Node *temp = top;
    top = top->next;
    free(temp);
    return val;
}
int main()
{
    push(10);
    push(20);
    printf("Popped: %d\n", pop());
    return 0;
}