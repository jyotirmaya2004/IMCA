#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char data;
    struct Node* prev;
    struct Node* next;
} Node;

typedef Node* NodePtr;

// Allocate a new node
NodePtr getNode() {
    NodePtr newNode = (NodePtr)malloc(sizeof(Node));
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// CREATE-DL from a string
NodePtr createDLFromString(char str[]) {
    NodePtr head = NULL, tail = NULL;
    int i = 0;
    while (str[i] != '\0') {
        NodePtr newNode = getNode();
        newNode->data = str[i];

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        i++;
    }
    return head;
}

// INSERT-DLIST-BEGIN
NodePtr insertAtBeginning(NodePtr head, char val) {
    NodePtr newNode = getNode();
    newNode->data = val;
    newNode->next = head;
    newNode->prev = NULL;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;
    return head;
}

// DELETE-DLIST-POS
NodePtr deleteAtPosition(NodePtr head, int pos) {
    if (head == NULL || pos <= 0) {
        printf("Invalid Position\n");
        return head;
    }

    NodePtr curr = head;

    // Delete from beginning
    if (pos == 1) {
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        free(curr);
        return head;
    }

    int count = 1;
    while (curr != NULL && count < pos) {
        curr = curr->next;
        count++;
    }

    if (curr == NULL) {
        printf("Invalid Position\n");
        return head;
    }

    NodePtr temp = curr->prev;
    temp->next = curr->next;
    if (curr->next != NULL)
        curr->next->prev = temp;

    free(curr);
    return head;
}

// Display the list
void displayList(NodePtr head) {
    printf("Doubly Linked List: ");
    while (head != NULL) {
        printf("%c <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    char str[100];
    char ch;
    int pos;
    NodePtr head = NULL;

    // Step 1: Input string and create DLL
    printf("Enter a string: ");
    scanf("%s", str);
    head = createDLFromString(str);

    printf("\nList after creation:\n");
    displayList(head);

    // Step 2: Insert at beginning
    printf("\nEnter character to insert at beginning: ");
    scanf(" %c", &ch);
    head = insertAtBeginning(head, ch);

    printf("List after inserting '%c' at beginning:\n", ch);
    displayList(head);

    // Step 3: Delete from position
    printf("\nEnter position to delete: ");
    scanf("%d", &pos);
    head = deleteAtPosition(head, pos);

    printf("List after deletion at position %d:\n", pos);
    displayList(head);

    return 0;
}