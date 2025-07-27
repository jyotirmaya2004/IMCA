#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

int countNodes(Node *head) {
    if (!head) return 0;
    int count = 0;
    Node *temp = head;
    do {
        count++;
        temp = temp->next;
    } while (temp != head);
    return count;
}

int main() {
    Node *head = NULL;
    printf("Node count: %d\n", countNodes(head));
    return 0;
}