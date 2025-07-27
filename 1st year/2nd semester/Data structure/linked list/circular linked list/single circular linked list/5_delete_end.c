#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void deleteEnd(Node **head) {
    if (*head == NULL) return;
    Node *temp = *head, *prev = NULL;
    while (temp->next != *head) {
        prev = temp;
        temp = temp->next;
    }
    if (prev == NULL) {
        free(temp);
        *head = NULL;
    } else {
        prev->next = *head;
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
    deleteEnd(&head);
    return 0;
}