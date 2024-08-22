#include <bits/stdc++.h>
using namespace std;

#define max_size 10

class Queue
{
    int cs; // Current size of the queue
    int ms; // Maximum size of the queue
    int rear;
    int front;
    int *arr;

public:
    Queue() : cs(0), ms(max_size), rear(ms - 1), front(0)
    {
        arr = new int[ms];
    }

    // Destructor to free the allocated memory
    ~Queue()
    {
        delete[] arr;
    }

    // Check if the queue is full
    bool isFull()
    {
        return ms == cs;
    }

    // Check if the queue is empty
    bool isEmpty()
    {
        return cs == 0;
    }

    // Push method to add an element to the queue
    void push(int data)
    {
        if (isFull())
        {
            cout << "Queue is full. Cannot push " << data << endl;
            return;
        }
        rear = (rear + 1) % ms;
        arr[rear] = data;
        cs++;
    }

    // Remove (dequeue) method to remove the front element from the queue
    void remove()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. Cannot remove element." << endl;
            return;
        }
        front = (front + 1) % ms;
        cs--;
    }

    // Get the front element of the queue
    int getFront()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. No front element." << endl;
            return -1; // Return a sentinel value indicating an error
        }
        return arr[front];
    }

    // Get the rear element of the queue
    int getRear()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. No rear element." << endl;
            return -1; // Return a sentinel value indicating an error
        }
        return arr[rear];
    }
};
