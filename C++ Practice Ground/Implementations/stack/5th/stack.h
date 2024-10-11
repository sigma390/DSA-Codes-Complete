
#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Stack
{

public:
    vector<T> arr;
    // check Empty Or not

    bool isEmpty()
    {
        return arr.size() == 0;
    }

    // push element
    void push(T val)
    {
        arr.push_back(val);
    }
    // Pop
    void pop()
    {
        if (isEmpty())
            return;
        else
        {
            arr.pop_back();
        }
    }

    T top()
    {
        return arr[arr.size() - 1];
    }
    T begin()
    {
        return arr.begin();
    }
};