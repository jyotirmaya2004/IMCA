#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next, *prev;
} Node;

void reverse(Node **head) {
    if (!*head) return;
    Node *curr = *head, *temp = NULL;
    do {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    } while (curr != *head);
    if (temp != NULL)
        *head = temp->prev;
}

int main() {
    Node *head = NULL;
    reverse(&head);
    return 0;
}