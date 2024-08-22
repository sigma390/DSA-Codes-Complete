#include <bits/stdc++.h>
using namespace std;

class Heap
{

    vector<int> arr;
    string heapType;

    // heapify method
    void heapify(int i)
    {
        int left = 2 * i;
        int right = 2 * i + 1;
        int min = i;

        // comparison
        if (left < arr.size() && compare(arr[left], arr[min]))
            min = left;
        if (right < arr.size() && compare(arr[right], arr[min]))
        {
            min = right;
        }
        while (min != i)
        {
            swap(arr[i], arr[min]);
            heapify(min);
        }
    }

public:
    bool compare(int a, int b)
    {
        if (heapType == "min")
        {
            return a < b;
        }
        else
        {
            return a > b; // max heap
        }
    }
    Heap(int defaultSize = 10, string hType)
    {
        arr.reserve(defaultSize + 1);
        arr.push_back(-1); // Oth index is inaccessible
        this->heapType = hType;
        // last element arr.size()-1
    }
    void Push(int d)
    {
        // add data to end od heap

        arr.push_back(d); // just at start
        // now checking Of index and Parent
        int idx = arr.size() - 1;
        int parent = idx / 2;
        while (idx > 1 and compare(arr[idx], arr[parent]))
        {
            swap(arr[parent], arr[idx]);
            // change idx to parent
            idx = parent;
            parent = parent / 2;
        }
    }

    // get top most element
    int top()
    {
        return arr[1];
    }

    // remove method
    void pop()
    {
        // swap first and last
        int idx = arr.size() - 1;
        swap(arr[1], arr[idx]);
        // remove last element
        arr.pop_back();
        // now heapify the root
    }

    // empty Method
    bool isEmpty()
    {
        return arr.size() == 1;
    }
};