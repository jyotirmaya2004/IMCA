#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* concat(Node *head1, Node *head2) {
    if (!head1) return head2;
    if (!head2) return head1;
    Node *temp = head1;
    while (temp->next != head1) temp = temp->next;
    temp->next = head2;
    temp = head2;
    while (temp->next != head2) temp = temp->next;
    temp->next = head1;
    return head1;
}

int main() {
    Node *head1 = NULL, *head2 = NULL;
    concat(head1, head2);
    return 0;
}