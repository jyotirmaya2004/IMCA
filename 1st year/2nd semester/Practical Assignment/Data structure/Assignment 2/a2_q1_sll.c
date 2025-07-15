#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} sll;

void create_list(sll **, int);
void insert(int, int, sll**);
void sort_list(sll **);
int count(sll *);
void reverse(sll **);
void delete(int, sll**);
void display(sll*);
sll *traverse(sll *);

int main() {
    sll *list = NULL;
    int ch, num, pos, n;

    while (1) {
        printf("\n1. Create\n2. Display\n3. Insert\n4. Reverse\n5. Delete from End\n6. Sort\n7. Exit\nChoice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++)
                    create_list(&list, i + 1);
                break;
            case 2:
                display(list);
                break;
            case 3:
                printf("Enter element: "); scanf("%d", &num);
                printf("Enter position: "); scanf("%d", &pos);
                insert(num, pos - 1, &list);
                break;
            case 4:
                reverse(&list);
                break;
            case 5:
                delete(count(list) - 1, &list);
                break;
            case 6:
                sort_list(&list);
                break;
            case 7:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}

void create_list(sll **list, int i) {
    sll *new = malloc(sizeof(sll));
    if (!new) { printf("Memory error"); exit(1); }
    printf("Enter element %d: ", i);
    scanf("%d", &new->data);
    new->next = NULL;
    if (!*list) *list = new;
    else traverse(*list)->next = new;
}

sll *traverse(sll *node) {
    while (node && node->next) node = node->next;
    return node;
}

void insert(int num, int pos, sll **head) {
    if (pos > count(*head)) {
        printf("Invalid position.\n");
        return;
    }
    sll *new = malloc(sizeof(sll)), *temp = *head;
    new->data = num;
    if (pos == 0) {
        new->next = *head;
        *head = new;
        return;
    }
    for (int i = 0; i < pos - 1; i++)
        temp = temp->next;
    new->next = temp->next;
    temp->next = new;
}

void delete(int pos, sll **head) {
    if (!*head) { printf("Empty list.\n"); return; }
    sll *temp = *head, *prev = NULL;
    if (pos == 0) {
        *head = temp->next;
        free(temp);
        return;
    }
    for (int i = 0; i < pos && temp; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (!temp) { printf("Position out of bounds.\n"); return; }
    prev->next = temp->next;
    free(temp);
}

void reverse(sll **head) {
    sll *prev = NULL, *curr = *head, *next = NULL;
    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
}

void sort_list(sll **head) {
    for (sll *i = *head; i; i = i->next)
        for (sll *j = i->next; j; j = j->next)
            if (i->data > j->data) {
                int tmp = i->data;
                i->data = j->data;
                j->data = tmp;
            }
}

void display(sll *node) {
    printf("List: ");
    while (node) {
        printf("%d->", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int count(sll *node) {
    int c = 0;
    while (node) {
        node = node->next;
        c++;
    }
    return c;
}
