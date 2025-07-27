#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next, *prev;
} Node;

void deleteEnd(Node **head) {
    if (*head == NULL) return;
    Node *last = (*head)->prev;
    if (last == *head) {
        free(last);
        *head = NULL;
    } else {
        Node *secondLast = last->prev;
        secondLast->next = *head;
        (*head)->prev = secondLast;
        free(last);
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
    deleteEnd(&head);
    return 0;
}