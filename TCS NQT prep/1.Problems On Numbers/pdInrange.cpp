// ind all Palindrome Numbers in a given range

// Problem Statement: Given a range of numbers, find all the palindrome numbers in the range.

// Note: A palindromic number is a number that remains the same when its digits are reversed.OR  a palindrome is a number that reads the same forward and backward Eg: 121,1221, 2552

// Examples:

// Example 1:
// Input: min = 10 , max = 50
// Output: 11 22 33 44
// Explanation: 11, 22, 33, 44 will remain the same when they read from forward or backward.

// Example2:
// Input: min = 100 , max = 150
// Output: 101 111 121 131 141
// Explanation: 11, 22, 33, 44 will remain the same when they read from forward or backward.

#include <bits/stdc++.h>
using namespace std;

vector<int> palins(int l, int h)
{
    vector<int> res;
    for (int i = l; i <= h; i++)
    {
        string a = to_string(i);
        string b = a;
        reverse(b.begin(), b.end());
        if (a == b)
        {
            res.push_back(i);
        }
    }
    return res;
}

int main()
{
    int l, h;
    cin >> l >> h;
    vector<int> arr = palins(l, h);
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}