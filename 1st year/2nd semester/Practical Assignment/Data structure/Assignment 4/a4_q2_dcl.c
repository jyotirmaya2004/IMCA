/*create a double circular linked list containing integer data. Delete the first node  and insert the same  node at last position of the list*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *prev, *next;
} DCLL;

void insert_end(DCLL **head, int val) {
    DCLL *new = (DCLL *)malloc(sizeof(DCLL));
    new->data = val;
    if (*head == NULL) {
        new->next = new->prev = new;
        *head = new;
        return;
    }

    DCLL *last = (*head)->prev;
    new->next = *head;
    new->prev = last;
    last->next = new;
    (*head)->prev = new;
}

void display(DCLL *head) {
    if (!head) {
        printf("List is empty.\n");
        return;
    }

    DCLL *temp = head;
    printf("List: ");
    do {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to start)\n");
}

void move_first_to_end(DCLL **head) {
    if (!*head || (*head)->next == *head) {
        printf("List has only one or zero nodes. No operation done.\n");
        return;
    }

    DCLL *first = *head;
    DCLL *last = first->prev;

    // Detach first
    DCLL *second = first->next;
    last->next = second;
    second->prev = last;

    // Re-insert at end
    first->next = second;
    first->prev = last;
    last->next = first;
    second->prev = first;

    *head = second;
}

int main() {
    DCLL *head = NULL;
    int n, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &val);
        insert_end(&head, val);
    }

    printf("\nOriginal List:\n");
    display(head);

    printf("\nMoving first node to end...\n");
    move_first_to_end(&head);

    printf("List after operation:\n");
    display(head);

    return 0;
}

/*Enter number of elements: 4
Enter integer 1: 10
Enter integer 2: 20
Enter integer 3: 30
Enter integer 4: 40

Original List:
List: 10 <-> 20 <-> 30 <-> 40 <-> (back to start)

Moving first node to end...
List after operation:
List: 20 <-> 30 <-> 40 <-> 10 <-> (back to start)
*/