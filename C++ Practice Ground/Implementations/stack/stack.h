#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Stack
{

public:
    vector<T> v;

    // push Element
    void push(T d)
    {
        v.push_back(d);
    }
    // pop elemnt
    void pop()
    {
        v.pop_back();
    }
    // Top element
    T top()
    {
        return v[v.size() - 1]; // imagine Stack as Vertical Array
    }

    // is empty
    bool isEmpty()
    {
        return v.size() == 0;
    }
};