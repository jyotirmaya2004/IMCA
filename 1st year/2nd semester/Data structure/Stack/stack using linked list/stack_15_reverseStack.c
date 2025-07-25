#include <stdio.h>
#include <stdlib.h>

/* ---- Function prototypes ---- */
struct Node;
typedef struct Node Node;
typedef struct Stack Stack;

void init(Stack* s);
void push(Stack* s, int value);
int  pop(Stack* s);
int  peek(Stack* s);
void display(Stack* s);
void reverse(Stack* s);
static void insertAtBottom(Stack* s, int value);  // helper

/* ---- Data structures ---- */
struct Node {
    int data;
    Node* next;
};

struct Stack {
    Node* top;
};

/* ---- Stack functions ---- */
void init(Stack* s) {
    s->top = NULL;
}

void push(Stack* s, int value) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    if (!newNode) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }
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

/* ---- Correct reverse ---- */
static void insertAtBottom(Stack* s, int value) {
    if (s->top == NULL) {
        push(s, value);
        return;
    }
    int temp = pop(s);
    insertAtBottom(s, value);
    push(s, temp);
}

void reverse(Stack* s) {
    if (s->top == NULL) return;
    int temp = pop(s);
    reverse(s);
    insertAtBottom(s, temp);
}

/* ---- driver ---- */
int main() {
    Stack stack;
    init(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Original: ");
    display(&stack);        // 30 -> 20 -> 10 -> NULL

    printf("Popped: %d\n", pop(&stack)); // 30
    printf("After pop: ");
    display(&stack);        // 20 -> 10 -> NULL

    printf("Top: %d\n", peek(&stack));   // 20

    reverse(&stack);
    printf("Reversed: ");
    display(&stack);        // 10 -> 20 -> NULL

    return 0;
}
