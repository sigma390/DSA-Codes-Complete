#include <bits/stdc++.h>
using namespace std;

class Node
{

    int data;
    Node *next;

public:
    Node(int d) : data(d), next(nullptr) {

                  };

    // destructor
    ~Node()
    {
        if (next != nullptr)
        {
            delete next;
        }
    };

    friend class List;
};

class List
{
    Node *head;
    Node *tail;

public:
    List() : tail(nullptr), head(nullptr) {

             };

    // destructor
    ~List()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }

    // methods
    Node *begin()
    {
        return head;
    }
    // push front
    void push_front(int d)
    {
        // if LL is Empty
        if (head == nullptr)
        {
            Node *n = new Node(d);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(d);
            n->next = head;
            head = n;
        }
    }

    // Push back
    void push_back(int d)
    {
        // if LL is Empty
        if (head == nullptr)
        {
            Node *n = new Node(d);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(d);
            tail->next = n;
            tail = n;
        }
    }

    // Insert at a Particular Position
    void insert(int d, int pos)
    {
        // check at Start
        if (pos == 0)
        {
            push_front(d);
        }
        else
        {
            Node *n = new Node(d);
            Node *temp = head;
            for (int i = 0; i < pos - 1; i++)
            {
                if (temp == nullptr)
                    return;
                temp = temp->next;
            }
            n->next = temp->next;
            temp->next = n;
        }
    }

    Node *reverse()
    {
        Node *prev = nullptr;
        Node *current = head;
        Node *next_node;
        while (current != nullptr)
        {

            next_node = current->next;
            current->next = prev;
            prev = current;
            current = next_node;
        }
        return prev;
    }

    // Dispay LL
    void Display(Node *head)
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        delete temp;
    }
};