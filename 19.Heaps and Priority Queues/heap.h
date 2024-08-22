#include <bits/stdc++.h>
using namespace std;

class Heap
{

    vector<int> arr;

public:
    Heap(int defaultSize = 10)
    {
        arr.reserve(defaultSize + 1);
        arr.push_back(-1); // Oth index is inaccessible

        // last element arr.size()-1
    }
    void Push(int d)
    {
        // add data to end od heap

        arr.push_back(d); // just at start
        // now checking Of index and Parent
        int idx = arr.size() - 1;
        int parent = idx / 2;
        while (idx > 1 and arr[parent] > arr[idx])
        {
            swap(arr[parent], arr[idx]);
            // change idx to parent
            idx = parent;
            parent = parent / 2;
        }
    }
};