#include <bits/stdc++.h>
using namespace std;
template <typename T>

class Stack
{
    int data;
    vector<T> arr;

public:
    // push method for stack
    void push(T data)
    {
        arr.push_back(data);
    }
    // pop method for stack
    void pop()
    {
        arr.pop_back();
    }
    // top method for stack
    T top()
    {
        return arr[arr.size() - 1];
    }
    // is empty method for stack
    bool isEmpty()
    {
        return arr.size();
    }
};
