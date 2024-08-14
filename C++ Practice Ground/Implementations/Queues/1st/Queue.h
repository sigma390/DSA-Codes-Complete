#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int ms, f, r, cs;
    int *arr;
    Queue(int ms) : ms(ms), f(0), r(ms - 1), cs(0)
    {
        arr = new int[ms];
    }

    bool isfull()
    {
        if (cs == ms)
            return true;
        return false;
    }
    bool isempty()
    {
        if (cs == 0)
            return true;
        return false;
    }
    void push(int d)
    {
        if (isfull())
            return;
        r = (r + 1) % ms;
        arr[r] = d;
        cs++;
    }

    void pop()
    {
        if (isempty())
            return;
        f = (f + 1) % ms;
        cs--;
    }

    // front element

    int front()
    {
        return arr[f];
    };
};
