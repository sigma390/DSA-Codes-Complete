#include <bits/stdc++.h>

using namespace std;

class Queue
{
    int f, r, cs, *arr;
    int ms = 5;

public:
    Queue(int f, int r, int cs) : f(0), r(ms - 1), cs(0)
    {
        arr = new int[ms];
    }

    // see If queue is Full
    bool fool()
    {
        return cs == ms;
    }

    // see If queue is empty
    bool isEmpty()
    {
        return cs == 0;
    }

    // push element
    void push(int val)
    {
        if (fool())
        {
            return;
        }
        r = (r + 1) % ms;
        arr[r] = val;
        cs++;
    }
    // pop front
    int pop()
    {
        if (isEmpty())
            return;

        f = (f + 1) % ms;
        cs--;
    }

    // get Front
    int getfront()
    {
        return arr[f]; // Return the element at the front index
    }
};