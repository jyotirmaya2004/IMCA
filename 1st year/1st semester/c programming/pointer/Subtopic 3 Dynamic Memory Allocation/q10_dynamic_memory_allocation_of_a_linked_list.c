#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL;
    struct Node *current = NULL;

    // Add nodes
    for (int i = 0; i < 3; i++) {
        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));  // Allocate memory
        if (new_node == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        new_node->data = i + 1;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
        } else {
            current->next = new_node;
        }
        current = new_node;
    }

    // Print nodes
    current = head;
    while (current != NULL) {
        printf("%d ", current->data);  // Output: 1 2 3
        current = current->next;
    }

    // Free memory
    current = head;
    while (current != NULL) {
        struct Node *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}