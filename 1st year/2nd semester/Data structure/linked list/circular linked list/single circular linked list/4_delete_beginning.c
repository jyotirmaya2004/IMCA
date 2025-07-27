#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void deleteBeginning(Node **head) {
    if (*head == NULL) return;
    Node *temp = *head, *last = *head;
    while (last->next != *head)
        last = last->next;
    if (temp->next == *head) {
        free(temp);
        *head = NULL;
    } else {
        *head = temp->next;
        last->next = *head;
        free(temp);
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
    deleteBeginning(&head);
    return 0;
}