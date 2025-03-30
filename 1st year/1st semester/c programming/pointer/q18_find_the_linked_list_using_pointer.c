#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
int getLength(struct Node *head) {
    int length = 0;
    while (head) {
        length++;
        head = head->next;
    }
    return length;
}
int main() {
    struct Node *head = malloc(sizeof(struct Node));
    head->data = 1;
    head->next = malloc(sizeof(struct Node));
    head->next->data = 2;
    head->next->next = NULL;
    printf("Length: %d\n", getLength(head));
    return 0;
}
