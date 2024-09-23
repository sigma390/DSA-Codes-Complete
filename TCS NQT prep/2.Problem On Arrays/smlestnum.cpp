// Find the smallest element in an array

// Example 1:
//  Input: arr[] = {2,5,1,3,0};
//  Output: 0
//  Explanation: 0 is the smallest element in the array.

// Example2:
// Input: arr[] = {8,10,5,7,9};
// Output: 5
// Explanation: 5 is the smallest element in the array.

#include <bits/stdc++.h>
using namespace std;

int SmallestinArray(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr[0];
}

int main()
{
    vector<int> arr{11, 2, 7, 966, 3};
    cout << SmallestinArray(arr);
    return 0;
}