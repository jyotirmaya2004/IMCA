#include<iostream>
class node
{
    public:
        int data;
        node *next;
};
int main()
{
    // Create the head node
    node *head = new node();
    head->data = 45;
    head->next = NULL;

    // Add a second node
    node *second = new node();
    second->data = 30;
    second->next = NULL;
    head->next = second;

    // Add a third node
    node *third = new node();
    third->data = 15;
    third->next = NULL;
    second->next = third;

    // Traverse and print the linked list
    node *current = head;
    while (current != NULL)
    {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "NULL" << std::endl;

    // Free the allocated memory
    current = head;
    while (current != NULL)
    {
        node *temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
