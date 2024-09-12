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
        else
        {
            Node *n = new Node(data);
            n->next = head;
            head = n;
        }
    }

    // push back
    void Push_rear(int data)
    {
        if (head == nullptr)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(data);
            tail->next = n;
            tail = n;
        }
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
    // search Node or Key
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

    // pop Front
    void pop_front()
    {
        Node *temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
    }

    // Display list
    void Display(Node *head)
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    int getLength(Node *head)
    {
        Node *temp = head;
        int cnt;
        while (temp != nullptr)
        {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }

    void deleteAt(Node *head, int pos)
    {
        // if List is Empty
        if (head == nullptr)
            cout << "Empty list " << endl;
        ;

        // if Pos oute of Bound
        if (pos > getLength(head) - 1)
            cout << "out of Bound !!!!" << endl;

        Node *temp = head;
        // first Element
        if (pos == 0)
        {
            head = head->next;
            temp->next = nullptr;
            delete temp;
        }
        else
        {
            for (int i = 0; i < pos - 1; i++)
            {
                temp = temp->next;
            }
            Node *nodeToDelete = temp->next;
            temp->next = temp->next->next;
            nodeToDelete->next = nullptr;
            delete nodeToDelete;
        }
    }
};
