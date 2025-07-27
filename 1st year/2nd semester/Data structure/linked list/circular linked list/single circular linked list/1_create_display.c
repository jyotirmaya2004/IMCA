#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* createCircularList(int n) {
    Node *head = NULL, *temp, *newNode;
    for (int i = 1; i <= n; i++) {
        newNode = (Node*)malloc(sizeof(Node));
        newNode->data = i;
        if (head == NULL) {
            head = newNode;
            newNode->next = head;
        } else {
            temp = head;
            while (temp->next != head)
                temp = temp->next;
            temp->next = newNode;
            newNode->next = head;
        }
    }
    return head;
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
    Node *head = createCircularList(5);
    display(head);
    return 0;
}