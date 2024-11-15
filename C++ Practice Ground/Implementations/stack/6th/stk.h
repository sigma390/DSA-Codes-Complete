#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Stck
{
    vector<T> arr;
    int data;

public:
    void Push(T data)
    {
        arr.push_back(data);
    }
    void Pop()
    {
        arr.pop_back();
    }
    T Top()
    {
        return arr[arr.size() - 1];
    }
    bool isEmpty()
    {
        return arr.size() == 0;
    }
};