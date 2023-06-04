#include <iostream>
using namespace std;

// making a linked list and displaying elements of a linked list

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void insertData(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void deleteAtEnd()
    {
        if (head == NULL)
        {
            cout << "Nothing to delete";
        }
        else
        {
            Node *temp = head;
            while ((temp->next)->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = NULL;
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
};

int main()
{
    LinkedList obj;
    obj.insertData(10);
    obj.insertData(20);
    obj.insertData(30);
    obj.DisplayData();
}