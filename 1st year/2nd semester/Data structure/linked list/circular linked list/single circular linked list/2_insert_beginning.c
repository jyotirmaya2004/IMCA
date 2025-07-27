#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void insertAtBeginning(Node **head, int val) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;
    } else {
        Node *temp = *head;
        while (temp->next != *head)
            temp = temp->next;
        newNode->next = *head;
        temp->next = newNode;
        *head = newNode;
    }
}

void display(Node *head) {
    if (!head) return;
    Node *temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

int main() {
    Node *head = NULL;
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);
    display(head);
    return 0;
}