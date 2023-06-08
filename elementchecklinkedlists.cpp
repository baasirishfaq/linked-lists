#include <iostream>
#include <stdio.h>

using namespace std;

// linked list, check whether element is present or not, linear search

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
    void findByvalue(int val)
    {
        int flag = 0;
        Node *temp = head;

        while (temp != NULL)
        {
            if (val == temp->data)
            {
                flag = 1;
                break;
            }
            temp = temp->next;
        }
        if (flag == 1)
        {
            cout << "element is present " << endl;
        }
        else
        {
            cout << "element not found" << endl;
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
    obj.insertData(40);
    obj.findByvalue(40);
    obj.DisplayData();
}