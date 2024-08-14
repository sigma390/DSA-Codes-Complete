

#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Stack
{
public:
    vector<T> v;

    // push me5thod
    void push(T val)
    {
        v.push_back(val);
    }
    // pop Method
    void pop()
    {
        v.pop_back();
    }
    // top method
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