#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next, *prev;
} Node;

void splitList(Node *head, Node **head1, Node **head2) {
    if (!head) return;
    Node *slow = head, *fast = head;
    while (fast->next != head && fast->next->next != head) {
        fast = fast->next->next;
        slow = slow->next;
    }
    *head1 = head;
    *head2 = slow->next;
    slow->next->prev = *head2;
    fast = (fast->next == head) ? fast : fast->next;
    fast->next = *head2;
    (*head2)->prev = fast;
    slow->next = *head1;
    (*head1)->prev = slow;
}

int main() {
    Node *head = NULL, *head1 = NULL, *head2 = NULL;
    splitList(head, &head1, &head2);
    return 0;
}