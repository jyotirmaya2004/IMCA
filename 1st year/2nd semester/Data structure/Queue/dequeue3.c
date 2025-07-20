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

// Create an empty circular deque
Deque* createDeque() {
    Deque* dq = (Deque*)malloc(sizeof(Deque));
    dq->front = dq->rear = NULL;
    return dq;
}

// Insert at front
void insertFront(Deque* dq, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;

    if (dq->front == NULL) {
        newNode->next = newNode->prev = newNode;
        dq->front = dq->rear = newNode;
    } else {
        newNode->next = dq->front;
        newNode->prev = dq->rear;
        dq->rear->next = newNode;
        dq->front->prev = newNode;
        dq->front = newNode;
    }
}

// Insert at rear
void insertRear(Deque* dq, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;

    if (dq->rear == NULL) {
        newNode->next = newNode->prev = newNode;
        dq->front = dq->rear = newNode;
    } else {
        newNode->prev = dq->rear;
        newNode->next = dq->front;
        dq->rear->next = newNode;
        dq->front->prev = newNode;
        dq->rear = newNode;
    }
}

// Delete from front
void deleteFront(Deque* dq) {
    if (dq->front == NULL) {
        printf("Deque is empty\n");
        return;
    }

    Node* temp = dq->front;
    if (dq->front == dq->rear) {
        dq->front = dq->rear = NULL;
    } else {
        dq->rear->next = dq->front->next;
        dq->front->next->prev = dq->rear;
        dq->front = dq->front->next;
    }
    free(temp);
}

// Delete from rear
void deleteRear(Deque* dq) {
    if (dq->rear == NULL) {
        printf("Deque is empty\n");
        return;
    }

    Node* temp = dq->rear;
    if (dq->front == dq->rear) {
        dq->front = dq->rear = NULL;
    } else {
        dq->rear->prev->next = dq->front;
        dq->front->prev = dq->rear->prev;
        dq->rear = dq->rear->prev;
    }
    free(temp);
}

// Display the deque
void display(Deque* dq) {
    if (dq->front == NULL) {
        printf("Deque is empty\n");
        return;
    }

    Node* temp = dq->front;
    printf("Deque: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != dq->front);
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
