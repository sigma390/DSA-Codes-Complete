#include <bits/stdc++.h>
using namespace std;

class Heap
{
    vector<int> arr;
    string heapType;

    // Helper function to compare elements based on heap type
    bool compare(int a, int b)
    {
        if (heapType == "min")
        {
            return a > b; // For min-heap, return true if parent > child
        }
        else
        {
            return a < b; // For max-heap, return true if parent < child
        }
    }

    // Heapify method to maintain heap property
    void heapify(int i)
    {
        int left = 2 * i;      // Index of left child
        int right = 2 * i + 1; // Index of right child
        int minOrMax = i;      // Index of the minimum or maximum element

        // Compare with left child
        if (left < arr.size() && compare(arr[minOrMax], arr[left]))
        {
            minOrMax = left;
        }
        // Compare with right child
        if (right < arr.size() && compare(arr[minOrMax], arr[right]))
        {
            minOrMax = right;
        }

        // If the current element is not in its correct position, swap and heapify further
        if (minOrMax != i)
        {
            swap(arr[i], arr[minOrMax]);
            heapify(minOrMax);
        }
    }

public:
    // Constructor to initialize the heap with a type (min or max)
    Heap(int defaultSize = 10, string hType = "min")
    {
        arr.reserve(defaultSize + 1); // Reserve space for heap elements
        arr.push_back(-1);            // Placeholder for the 0th index (not used)
        this->heapType = hType;       // Set the heap type (min or max)
    }

    // Method to push a new element into the heap
    void Push(int d)
    {
        // Add data to the end of the heap
        arr.push_back(d);
        int idx = arr.size() - 1; // Index of the newly added element
        int parent = idx / 2;     // Index of its parent

        // Fix the heap property by swapping with the parent if necessary
        while (idx > 1 && compare(arr[parent], arr[idx]))
        {
            swap(arr[parent], arr[idx]);
            idx = parent;        // Move up to the parent
            parent = parent / 2; // Update parent index
        }
    }

    // Method to get the topmost element (min or max depending on heap type)
    int top()
    {
        return arr[1]; // Return the root element
    }

    // Method to remove the topmost element from the heap
    void pop()
    {
        int idx = arr.size() - 1; // Index of the last element
        swap(arr[1], arr[idx]);   // Swap the root with the last element
        arr.pop_back();           // Remove the last element

        // Heapify the root element to maintain the heap property
        heapify(1);
    }
    void print()
    {
        for (auto x : arr)
        {
            cout << x << " , ";
        }
    }
};
