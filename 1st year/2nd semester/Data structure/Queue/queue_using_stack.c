#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

typedef struct Stack {
    int data[SIZE];
    int top;
} Stack;

void push(Stack *s, int value) {
    s->data[++s->top] = value;
}

int pop(Stack *s) {
    return s->data[s->top--];
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

// Queue using two stacks
typedef struct Queue {
    Stack stack1;
    Stack stack2;
} Queue;

// Initialize the queue
void initQueue(Queue *q) {
    q->stack1.top = -1;
    q->stack2.top = -1;
}

void enqueue(Queue *q, int x) {
    // Move all elements from stack1 to stack2
    while (!isEmpty(&q->stack1)) {
        push(&q->stack2, pop(&q->stack1));
    }

    // Push the new item onto stack1
    push(&q->stack1, x);

    // Push everything back to stack1 from stack2
    while (!isEmpty(&q->stack2)) {
        push(&q->stack1, pop(&q->stack2));
    }
}

int dequeue(Queue *q) {
    if (isEmpty(&q->stack1)) {
        printf("Queue is empty\n");
        return -1;
    }
    return pop(&q->stack1);
}

// Example usage
int main() {
    Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    printf("Dequeued: %d\n", dequeue(&q)); // 10
    printf("Dequeued: %d\n", dequeue(&q)); // 20

    return 0;
}
