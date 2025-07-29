#include <bits/stdc++.h>
using namespace std;

bool isCloseDuplicatesBruteForce(vector<int> arr, int k)
{
    vector<int> closeDuplicates;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size() && j <= i + k; j++)
        {
            if (arr[i] == arr[j])
            {
                closeDuplicates.push_back(arr[i]);
            }
        }
    }

    for (auto &i : closeDuplicates)
    {
        cout << i << " ";
    }
    cout << endl;

    return !closeDuplicates.empty();
}

// Optimised Approach using Sliding Window
bool isCloseDuplicatesSlidingWindow(vector<int> arr, int k)
{
    unordered_map<int, int> Visited;
    for (int i = 0; i < arr.size(); i++)
    {
        if (Visited.find(arr[i]) != Visited.end() && i - Visited[arr[i]] <= k)
        {
            return true; // Found a close duplicate
        }
        Visited[arr[i]] = i; // Update the index of the current element
    }
    return false; // No close duplicates found
}
int main()
{
    vector<int> arr = {1, 2, 3, 2, 3, 3};
    int k = 2;
    bool result = isCloseDuplicatesBruteForce(arr, k);
    if (result)
    {
        cout << "There are close duplicates within the range of " << k << endl;
    }
    else
    {
        cout << "No close duplicates found within the range of " << k << endl;
    }
    return 0;
}