// Reverse a given Array
// Problem Statement: You are given an array. The task is to reverse the array and print it.
// Examples:

// Example 1:
// Input: N = 5, arr[] = {5,4,3,2,1}
// Output: {1,2,3,4,5}
// Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

// Example 2:
// Input: N=6 arr[] = {10,20,30,40}
// Output: {40,30,20,10}
// Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{2, 9, 6, 3, 7, 8, 5, 32};
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << "\nAfter Reverse" << endl;
    reverse(arr.begin(), arr.end());
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}