#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next, *prev;
} Node;

int search(Node *head, int key) {
    if (!head) return 0;
    Node *temp = head;
    do {
        if (temp->data == key) return 1;
        temp = temp->next;
    } while (temp != head);
    return 0;
}

int main() {
    Node *head = NULL;
    printf("Search result: %d\n", search(head, 10));
    return 0;
}