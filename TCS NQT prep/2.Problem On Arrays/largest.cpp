// find the Largest element in an array
// 837
// 9
// Problem Statement: Given an array, we have to find the largest element in the array.

// Examples
// Example 1:
// Input:
//  arr[] = {2,5,1,3,0};
// Output:
//  5
// Explanation:
//  5 is the largest element in the array.

// Example2:
// Input:
//  arr[] = {8,10,5,7,9};
// Output:
//  10
// Explanation:
//  10 is the largest element in the array.

#include <bits/stdc++.h>
using namespace std;
int largest(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}
int secondSmallest(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr[1];
}
int secondLargeest(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 2];
}
int main()
{
    vector<int> arr{8, 10, 5, 7, 9};
    cout << largest(arr);
    cout << "\n";
    cout << secondSmallest(arr);
    cout << "\n";
    cout << secondLargeest(arr);
    cout << "\n";

    return 0;
}