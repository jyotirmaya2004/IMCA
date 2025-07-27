#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void reverse(Node **head) {
    if (!*head) return;
    Node *prev = NULL, *curr = *head, *nextNode;
    Node *tail = *head;
    while (tail->next != *head) tail = tail->next;
    Node *stop = tail;
    do {
        nextNode = curr->next;
        curr->next = prev ? prev : *head;
        prev = curr;
        curr = nextNode;
    } while (curr != *head);
    (*head)->next = prev;
    *head = prev;
}

int main() {
    Node *head = NULL;
    reverse(&head);
    return 0;
}