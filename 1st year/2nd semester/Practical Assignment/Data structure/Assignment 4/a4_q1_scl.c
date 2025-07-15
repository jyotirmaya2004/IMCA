/*create a single circular linked list containing float data and insert node at last position of the list*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    float data;
    struct Node *next;
} CLL;

void insert_end(CLL **tail, float value) {
    CLL *new = (CLL *)malloc(sizeof(CLL));
    new->data = value;

    if (*tail == NULL) {
        new->next = new;
        *tail = new;
    } else {
        new->next = (*tail)->next;
        (*tail)->next = new;
        *tail = new;
    }
}

void display(CLL *tail) {
    if (!tail) {
        printf("List is empty.\n");
        return;
    }

    CLL *temp = tail->next;
    printf("Circular List: ");
    do {
        printf("%.2f -> ", temp->data);
        temp = temp->next;
    } while (temp != tail->next);
    printf("(back to start)\n");
}

int main() {
    CLL *tail = NULL;
    int n;
    float val;

    printf("Enter number of float elements to insert: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter float %d: ", i + 1);
        scanf("%f", &val);
        insert_end(&tail, val);
    }

    display(tail);

    // Insert one more node at end
    printf("\nInsert one more float at end: ");
    scanf("%f", &val);
    insert_end(&tail, val);

    printf("After inserting at end:\n");
    display(tail);

    return 0;
}
