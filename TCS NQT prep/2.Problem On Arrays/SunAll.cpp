// Calculate Sum of the Elements of the Array

// 13

// 0
// Problem Statement: Given an array, we have to find the sum of all the elements in the array.

// Examples:

// Example 1:
// Input: N = 5, array[] = {1,2,3,4,5}
// Output: 15
// Explanation: Sum of all the elements is 1+2+3+4+5 = 15

// Example 2:
// Input:  N=6, array[] = {1,2,1,1,5,1}
// Output: 11
// Explanation: Sum of all the elements is 1+2+1+1+5+1 = 11

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};
    int sum = accumulate(arr.begin(), arr.end(), 0);
    cout << "Sum is :" << sum;
    return 0;
}