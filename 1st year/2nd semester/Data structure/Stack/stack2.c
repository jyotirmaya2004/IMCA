#include <stdio.h>
#include <stdlib.h>

// STACK DATA STRUCTURE DEFINITION
typedef struct nodetype {
    int info;
    struct nodetype *next;
} node;

typedef struct stacktype {
    node *top;
} stack;

// TO INITIALIZE STACK
void initStack(stack *st) {
    st->top = NULL;  // POINTS TO NOTHING
}

// TO PUSH AN ELEMENT INTO STACK
void push(stack *st, int val) {
    node *newnode = NULL;
    newnode = (node *)malloc(sizeof(node));
    if (newnode == NULL) {
        printf("\nMEMORY OVERFLOW...\n");
        return;
    }
    newnode->info = val;
    newnode->next = st->top;
    st->top = newnode;
    printf("\nPUSH SUCCESSFUL\n");
}

// TO POP AN ELEMENT FROM STACK
int pop(stack *st) {
    if (st->top == NULL) {
        printf("\nSTACK UNDERFLOW...\n");
        return -1;
    }
    node *temp = st->top;
    int val = temp->info;
    st->top = st->top->next;
    free(temp);
    return val;
}

// TO DISPLAY STACK ELEMENTS
void display(stack *st) {
    node *ptr = st->top;
    if (ptr == NULL) {
        printf("\nSTACK IS EMPTY\n");
        return;
    }
    printf("\nSTACK ELEMENTS:\n");
    while (ptr != NULL) {
        printf("%d -> ", ptr->info);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// MAIN FUNCTION
int main() {
    stack st;
    initStack(&st);

    int choice, val;

    do {
        printf("\nMENU\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &val);
                push(&st, val);
                break;
            case 2:
                val = pop(&st);
                if (val != -1)
                    printf("Popped value: %d\n", val);
                break;
            case 3:
                display(&st);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}