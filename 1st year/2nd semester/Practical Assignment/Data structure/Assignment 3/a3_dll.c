/* a double linked list containing character of string , Perform following operation
(i) insert a character at the first position
(ii) delete a character from any position of dll*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char data;
    struct node *prev, *next;
} DLL;

void insert_end(DLL **head, char ch) {
    DLL *new = (DLL *)malloc(sizeof(DLL));
    new->data = ch;
    new->prev = new->next = NULL;

    if (!*head) {
        *head = new;
        return;
    }

    DLL *temp = *head;
    while (temp->next) temp = temp->next;

    temp->next = new;
    new->prev = temp;
}

void insert_front(DLL **head, char ch) {
    DLL *new = (DLL *)malloc(sizeof(DLL));
    new->data = ch;
    new->prev = NULL;
    new->next = *head;
    if (*head) (*head)->prev = new;
    *head = new;
}

void delete_pos(DLL **head, int pos) {
    if (!*head) {
        printf("List is empty.\n");
        return;
    }

    DLL *temp = *head;
    int i = 0;

    while (temp && i < pos) {
        temp = temp->next;
        i++;
    }

    if (!temp) {
        printf("Invalid position.\n");
        return;
    }

    if (temp->prev) temp->prev->next = temp->next;
    else *head = temp->next;

    if (temp->next) temp->next->prev = temp->prev;

    free(temp);
}

void display(DLL *head) {
    printf("List: ");
    while (head) {
        printf("%c <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    DLL *head = NULL;
    char str[100], ch;
    int pos;

    // Input full string
    printf("Enter a string: ");
    scanf("%s", str);  // Use fgets() if you want spaces

    // Build DLL from string
    for (int i = 0; str[i] != '\0'; i++) {
        insert_end(&head, str[i]);
    }

    printf("\nDLL created from string:\n");
    display(head);

    // Insert a character at front
    printf("\nEnter character to insert at front: ");
    scanf(" %c", &ch);
    insert_front(&head, ch);
    printf("After inserting at front:\n");
    display(head);

    // Delete a character from a position
    printf("\nEnter position to delete (0-based index): ");
    scanf("%d", &pos);
    delete_pos(&head, pos);
    printf("After deletion:\n");
    display(head);

    return 0;
}