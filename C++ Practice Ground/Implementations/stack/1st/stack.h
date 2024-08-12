#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Stack
{
public:
    vector<T> v;

    // push element
    void push(T data)
    {
        v.push_back(data);
    }
    // pop elemeny
    void pop()
    {
        v.pop_back();
    }
    // top of element
    T top()
    {
        return v[v.size() - 1];
    }

    // is empty
    bool isEmpty()
    {
        return v.size() == 0;
    }
};