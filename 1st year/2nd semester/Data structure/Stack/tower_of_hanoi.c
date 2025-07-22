#include <stdio.h>
#include <stdlib.h>

#define MAX 10

// Define a stack
typedef struct {
    int arr[MAX];
    int top;
    char name;
} Stack;

// Function to initialize a stack
void init(Stack *s, char name) {
    s->top = -1;
    s->name = name;
}

// Push a disk onto a stack
void push(Stack *s, int value) {
    if (s->top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    s->arr[++(s->top)] = value;
}

// Pop a disk from a stack
int pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->arr[(s->top)--];
}

// Move disk from one stack to another
void moveDisk(Stack *src, Stack *dest) {
    int disk = pop(src);
    if (disk != -1) {
        push(dest, disk);
        printf("Move disk %d from %c to %c\n", disk, src->name, dest->name);
    }
}

// Recursive Tower of Hanoi using stacks
void towerOfHanoi(int n, Stack *source, Stack *aux, Stack *dest) {
    if (n > 0) {
        towerOfHanoi(n - 1, source, dest, aux);
        moveDisk(source, dest);
        towerOfHanoi(n - 1, aux, source, dest);
    }
}

// Display stack contents (for debugging)
void display(Stack *s) {
    printf("Stack %c: ", s->name);
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}

int main() {
    Stack A, B, C;
    int n ;
	printf("Enter number of disc : ");
	scanf("%d",&n); // Number of disks

    init(&A, 'A');
    init(&B, 'B');
    init(&C, 'C');

    // Push disks onto stack A (largest at bottom)
    for (int i = n; i >= 1; i--) {
        push(&A, i);
    }

    printf("Initial State:\n");
    display(&A);
    display(&B);
    display(&C);
    printf("\n");

    // Solve Tower of Hanoi
    towerOfHanoi(n, &A, &B, &C);

    printf("\nFinal State:\n");
    display(&A);
    display(&B);
    display(&C);

    return 0;
}
