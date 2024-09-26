// QUESTION 5
// Problem Statement:- You will be given an array of integers and a target value. Determine the number of pairs of
// array elements that have a difference equal to a target value.
// For example, given an array of [1, 2, 3, 4] and a target value of 1, we have three values meeting the condition:
// 2-1 = 1
// 3-2 = 1
// 4-3 = 1.
// Function Description
// Write a function pairs. It must return an integer representing the number of element pairs having the required
// difference.
// pairs has the following parameter(s):
//  k: an integer, the target difference
//  arr: an array of integers
// Input Format
//  The first line contains two space-separated integers n and k, the size of arr and the target value.
//  The second line contains n space-separated integers of the array arr.
// Sample Input
//  5 2
//  1 5 3 4 2
// Sample Output
// 2

#include <bits/stdc++.h>
using namespace std;

int pairDiff(vector<int> &arr, int k)
{
    int pairs{0};
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] - arr[i] == k)
            {
                pairs++;
            }
        }
    }
    return pairs;
}

int main()
{
    vector<int> arr{1, 2, 3, 4};
    int k = 1;
    cout << pairDiff(arr, k);

    return 0;
}