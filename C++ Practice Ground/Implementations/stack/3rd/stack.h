#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Stack
{
    T data;
    vector<T> arr;

public:
    // push element into Stack
    void Push(T data)
    {
        arr.push_back(data);
    }

    // pop elemt
    void pop()
    {
        if (arr.size() == 0)
        { // empty Stack
            return;
        }
        arr.pop_back();
        cot << "Popped" << endl;
    }

    // Top element
    T top()
    {
        return arr[arr.size() - 1];
    }
};