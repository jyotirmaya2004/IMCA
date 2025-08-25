#include <stdio.h>
#include<stdlib.h>
#define SIZE 5

typedef struct {
    int arr[SIZE];
    int front;
    int rear;
} Deque;

void initDeque(Deque *dq) {
    dq->front = -1;
    dq->rear = -1;
    
}

int isFull(Deque *dq) {
    return ((dq->front == 0 && dq->rear == SIZE - 1) ||
            (dq->front == dq->rear + 1));
}

int isEmpty(Deque *dq) {
    return (dq->front == -1);
}

void insertFront(Deque *dq, int key) {
    if (isFull(dq)) {
        printf("Deque is Full\n");
        return;
    }

    if (dq->front == -1) {  // Empty deque
        dq->front = dq->rear = 0;
    } else if (dq->front == 0) {
        dq->front = SIZE - 1;
    } else {
        dq->front = dq->front - 1;
    }

    dq->arr[dq->front] = key;
}

void insertRear(Deque *dq, int key) {
    if (isFull(dq)) {
        printf("Deque is Full\n");
        return;
    }

    if (dq->front == -1) {  // Empty deque
        dq->front = dq->rear = 0;
    } else if (dq->rear == SIZE - 1) {
        dq->rear = 0;
    } else {
        dq->rear = dq->rear + 1;
    }

    dq->arr[dq->rear] = key;
}

void deleteFront(Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is Empty\n");
        return;
    }

    printf("Deleted from front: %d\n", dq->arr[dq->front]);

    if (dq->front == dq->rear) {
        dq->front = dq->rear = -1;
    } else if (dq->front == SIZE - 1) {
        dq->front = 0;
    } else {
        dq->front = dq->front + 1;
    }
}

void deleteRear(Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is Empty\n");
        return;
    }

    printf("Deleted from rear: %d\n", dq->arr[dq->rear]);

    if (dq->front == dq->rear) {
        dq->front = dq->rear = -1;
    } else if (dq->rear == 0) {
        dq->rear = SIZE - 1;
    } else {
        dq->rear = dq->rear - 1;
    }
}

int getFront(Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is Empty\n");
        return -1;
    }
    return dq->arr[dq->front];
}

int getRear(Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is Empty\n");
        return -1;
    }
    return dq->arr[dq->rear];
}

void display(Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is Empty\n");
        return;
    }

    int i = dq->front;
    printf("Deque: ");
    while (1) {
        printf("%d ", dq->arr[i]);
        if (i == dq->rear) break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

// Main function to test
int main() {
    Deque dq;
    initDeque(&dq);

    insertRear(&dq, 10);
    insertRear(&dq, 20);
    insertFront(&dq, 5);
    insertFront(&dq, 2);

    display(&dq);

    deleteRear(&dq);
    deleteFront(&dq);

    display(&dq);

    printf("Front: %d\n", getFront(&dq));
    printf("Rear: %d\n", getRear(&dq));

    return 0;
}
