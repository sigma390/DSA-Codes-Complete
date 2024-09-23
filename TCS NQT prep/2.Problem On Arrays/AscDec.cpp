// Rearrange array in increasing-decreasing order

// Problem Statement: Rearrange the array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order

// Examples:

// Example 1:
// Input: 8 7 1 6 5 9
// Output: 1 5 6 9 8 7
// Explanation: First three elements are in the ascending order and next three elements are in the descending order.

// Example 2:
// Input: 4 2 8 6 15 5 9 20
// Output: 2 4 5 6 20 15 9 8

#include <bits/stdc++.h>
using namespace std;
void ascDesc(vector<int> &arr)
{
    // sort Entire Array then reverse The Second Half

    sort(arr.begin(), arr.end());
    // reverse the second Half
    reverse(arr.begin() + arr.size() / 2, arr.end());
}
int main()
{
    vector<int> arr{8, 7, 1, 6, 5, 9};
    ascDesc(arr);
    for (auto x : arr)
    {
        cout << x << ",";
    }
    return 0;
}