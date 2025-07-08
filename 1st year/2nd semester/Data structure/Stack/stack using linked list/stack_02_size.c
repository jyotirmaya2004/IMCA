#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Stack {
    Node* top;
} Stack;

void init(Stack* s) {
    s->top = NULL;
}

int size(Stack* s) {
    int count = 0;
    Node* temp = s->top;
    while (temp) { count++; temp = temp->next; }
    return count;
}

void push(Stack* s, int value) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = s->top;
    s->top = newNode;
}

int pop(Stack* s) {
    if (s->top == NULL) {
        printf("Stack Underflow\n");
        return -1;
    }
    Node* temp = s->top;
    int val = temp->data;
    s->top = temp->next;
    free(temp);
    return val;
}

int peek(Stack* s) {
    if (s->top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->top->data;
}

void display(Stack* s) {
    Node* temp = s->top;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    Stack stack;
    init(&stack);
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    display(&stack);
    printf("Popped: %d\n", pop(&stack));
    display(&stack);
    printf("Top: %d\n", peek(&stack));
    printf("Size: %d\n", size(&stack));
    return 0;
}
