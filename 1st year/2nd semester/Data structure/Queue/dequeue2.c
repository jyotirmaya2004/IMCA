#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

typedef struct Deque {
    Node* front;
    Node* rear;
} Deque;

// Create a new empty deque
Deque* createDeque() {
    Deque* dq = (Deque*)malloc(sizeof(Deque));
    dq->front = dq->rear = NULL;
    return dq;
}

// Insert at front
void insertFront(Deque* dq, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = dq->front;

    if (dq->front == NULL)
        dq->rear = newNode;
    else
        dq->front->prev = newNode;

    dq->front = newNode;
}

// Insert at rear
void insertRear(Deque* dq, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = dq->rear;

    if (dq->rear == NULL)
        dq->front = newNode;
    else
        dq->rear->next = newNode;

    dq->rear = newNode;
}

// Delete from front
void deleteFront(Deque* dq) {
    if (dq->front == NULL) {
        printf("Deque is empty\n");
        return;
    }

    Node* temp = dq->front;
    dq->front = dq->front->next;

    if (dq->front == NULL)
        dq->rear = NULL;
    else
        dq->front->prev = NULL;

    free(temp);
}

// Delete from rear
void deleteRear(Deque* dq) {
    if (dq->rear == NULL) {
        printf("Deque is empty\n");
        return;
    }

    Node* temp = dq->rear;
    dq->rear = dq->rear->prev;

    if (dq->rear == NULL)
        dq->front = NULL;
    else
        dq->rear->next = NULL;

    free(temp);
}

// Display the deque
void display(Deque* dq) {
    Node* temp = dq->front;
    printf("Deque: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Example usage
int main() {
    Deque* dq = createDeque();

    insertRear(dq, 10);
    insertFront(dq, 5);
    insertRear(dq, 15);
    display(dq);  // Output: 5 10 15

    deleteFront(dq);
    display(dq);  // Output: 10 15

    deleteRear(dq);
    display(dq);  // Output: 10

    return 0;
}
