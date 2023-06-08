#include <iostream>
using namespace std;

// program to insert element at the start of a linked list.
// program to print the elements of linked list in reverse order.

struct Node
{
    int data;
    Node *next, *prev;
};

class LinkedList
{
    Node *head, *tail;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertData(int value)
    {
        Node *newNode = new Node();
        newNode->prev = NULL;
        newNode->next = NULL;
        newNode->data = value;

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void insertAtStart(int value)
    {
        Node *newNode = new Node();
        newNode->prev = NULL;
        newNode->next = NULL;
        newNode->data = value;

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    void DisplayData()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "\t";
            temp = temp->next;
        }
    }

    void DisplayDataReverse()
    {
        Node *temp = tail;
        while (temp != NULL)
        {
            cout << temp->data << "\t";
            temp = temp->prev;
        }
    }
};

int main()
{
    LinkedList obj;
    obj.insertData(10);
    obj.insertAtStart(90);
    obj.insertData(20);
    obj.insertData(30);

    obj.DisplayData();
}