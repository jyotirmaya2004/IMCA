#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next, *prev;
} Node;

void deleteBeginning(Node **head) {
    if (*head == NULL) return;
    Node *last = (*head)->prev;
    if (*head == last) {
        free(*head);
        *head = NULL;
    } else {
        Node *temp = *head;
        *head = temp->next;
        (*head)->prev = last;
        last->next = *head;
        free(temp);
    }
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
    Node *head = NULL;
    deleteBeginning(&head);
    return 0;
}