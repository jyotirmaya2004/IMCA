#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next, *prev;
} Node;

Node* createCircularDoublyList(int n) {
    Node *head = NULL, *newNode, *last = NULL;
    for (int i = 1; i <= n; i++) {
        newNode = (Node*)malloc(sizeof(Node));
        newNode->data = i;
        if (head == NULL) {
            head = newNode;
            head->next = head;
            head->prev = head;
            last = head;
        } else {
            newNode->next = head;
            newNode->prev = last;
            last->next = newNode;
            head->prev = newNode;
            last = newNode;
        }
    }
    return head;
}

void display(Node *head) {
    if (!head) return;
    Node *temp = head;
    do {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

int main() {
    Node *head = createCircularDoublyList(5);
    display(head);
    return 0;
}