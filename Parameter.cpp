#include<iostream>
using namespace std;

struct Node
{
    int item;
    struct Node* next;
};

struct Node* head = NULL;

void insertAtBeginning(int data)
{
    struct Node* new_node = new Node();

    new_node->item = data;
    new_node->next = head;
    head = new_node;
}

void insertAtEnd(int data)
{
    struct Node* new_node = new Node();
    struct Node* last = head;

    new_node->item = data;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
    }

    else
    {
        while (last->next !=NULL)
        {
            last = last->next;
        }

        last->next = new_node;
    }
}

void insertAfter(struct Node* prev_node, int data)
{
    if (prev_node == NULL)
    {
        cout<< "/nThe given previous node cannot be NULL..";
    }

    else
    {
        struct Node* new_node = new Node();

        new_node->item = data;
        new_node->next = prev_node->next;
        prev_node->next = new_node;
    }
}

void deleteNode(int key)
{
    struct Node *temp = head, *prev;

    if (temp != NULL && temp->item == key)
    {
        head = temp->next;
        (temp);
        return;
    }

    while (temp != NULL && temp->item != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        return;
    }

    prev->next = temp->next;
    (temp);
}

void printList(struct Node* node)
{
    while (node != NULL)
    {
        cout<<node->item<<"";
        node = node->next;
    }
    cout<<endl<<endl;
}

int main()
{
    insertAtBeginning(5);
    insertAtBeginning(4);
    insertAtBeginning(3);
    insertAtBeginning(2);
    insertAtBeginning(1);

    cout<<"Linked list: ";
    printList (head);

    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);

    cout<< "Linked list: ";
    printList(head);

    insertAfter(head->next->next->next->next, 50);

    cout<<"Linked list after inserting 50: ";
    printList(head);

    cout<<"/nAfter deleting 4, 20 & 30: ";

    deleteNode(4);
    deleteNode(20);
    deleteNode(30);

    printList (head);

    return 0;

}
