#include <iostream>
using namespace std;

// program to make a queue and add elements

struct Node
{
    int data;
    Node *next, *prev;
};

class Queue
{
    Node *head, *tail;

public:
    Queue()
    {
        head = tail = NULL;
    }
    void enqueue(int value)
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

    void dequeue()
    {
        if (head == NULL)
        {
            cout << "nothing to delete";
        }
        else
        {
            head = head->next;
        }
    }

    void display()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    Queue obj;

    obj.enqueue(10);
    obj.enqueue(20);
    obj.enqueue(30);
    obj.enqueue(40);
    obj.enqueue(50);
    obj.dequeue();
    obj.display();
    return 0;
}