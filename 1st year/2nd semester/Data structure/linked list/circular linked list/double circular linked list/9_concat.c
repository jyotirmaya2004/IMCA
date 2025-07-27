#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next, *prev;
} Node;

Node* concat(Node *head1, Node *head2) {
    if (!head1) return head2;
    if (!head2) return head1;
    Node *last1 = head1->prev;
    Node *last2 = head2->prev;
    last1->next = head2;
    head2->prev = last1;
    last2->next = head1;
    head1->prev = last2;
    return head1;
}

int main() {
    Node *head1 = NULL, *head2 = NULL;
    concat(head1, head2);
    return 0;
}