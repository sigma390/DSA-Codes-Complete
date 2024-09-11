#include <bits/stdc++.h>
using namespace std;

class List;

class Node
{
    int data;

public:
    Node *next;
    Node(int d) : data(d), next(nullptr) {} // comnstructor
    // Get Data
    int getData()
    {
        return data;
    }

    // destructor
    ~Node()
    {
        if (next != nullptr)
            delete next;
    }

    // declare Friend Class List
    friend class List;
};

class List
{
private:
    Node *head;
    Node *tail;

public:
    List() : head(nullptr), tail(nullptr) {};

    // get head
    Node *begin()
    {
        return head;
    }

    // destructor down below
    ~List()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }

    //==========> Now Methods <==============

    // push Front
    void Push_front(int data)
    {
        // check if  the list is empty or not
        if (head == nullptr)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        // if not
        Node *n = new Node(data);
        n->next = head;
        head = n;
    }

    // push back
    void Push_rear(int data)
    {
        if (head == nullptr)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        Node *n = new Node(data);
        tail->next = n;
        tail = n;
    }

    // insert at Given Position;
    void Insert(int data, int pos)
    {
        if (head == nullptr)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        else
        {
            Node *temp = head;

            for (int i = 0; i <= pos - 1; i++)
            {
                temp = temp->next;
            }
            Node *n = new Node(data);
            n->next = temp->next;
            temp->next = n;
        }
    }

    int search(int k)
    {
        if (head == nullptr)
            return -1;
        Node *temp = head;
        int idx = 0;
        while (temp != nullptr)
        {
            if (temp->data == k)
            {
                return idx;
            }
            idx++;
            temp = temp->next;
        }
        return idx;
    }
};
