#include <stdio.h>
#include <stdlib.h>
#define MAX 30

typedef struct instackType {
    int arr[MAX];
    int top;
} instack;

void initstack(instack *st) {
    st->top = -1;
    for (int i = 0; i < MAX; i++) {
        st->arr[i] = 0;
    }
}

void push(instack *st, int val) {
    if (st->top == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    st->top++;
    st->arr[st->top] = val;
}

int pop(instack *st) {
    if (st->top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    }
    int popval = st->arr[st->top];
    st->top--;
    return popval;
}

void display(instack *st) {
    if (st->top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= st->top; i++) {
        printf("%d ", st->arr[i]);
    }
    printf("\n");
}

int main() {
    instack st;
    int num, opt;
    initstack(&st);  // Initialize stack before use

    while (1) {
        printf("\n\t\tStack Menu\n");
        printf("\t1. Push\n");
        printf("\t2. Pop\n");
        printf("\t3. Display\n");
        printf("\t4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &opt);

        switch (opt) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &num);
                push(&st, num);
                break;

            case 2:
                num = pop(&st);
                if (num != -1)
                    printf("Popped: %d\n", num);
                break;

            case 3:
                display(&st);
                break;

            case 4:
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
