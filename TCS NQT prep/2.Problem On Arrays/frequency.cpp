// Problem statement: Given an array, we have found the number of occurrences of each element in the array.

// Examples:

// Example 1:
// Input: arr[] = {10,5,10,15,10,5};
// Output: 10  3
// 	 5  2
//         15  1
// Explanation: 10 occurs 3 times in the array
// 	      5 occurs 2 times in the array
//               15 occurs 1 time in the array

// Example2:
// Input: arr[] = {2,2,3,4,4,2};
// Output: 2  3
// 	3  1
//         4  2
// Explanation: 2 occurs 3 times in the array
// 	     3 occurs 1 time in the array
//              4 occurs 2 time in the array
// Solution
// Disclaimer: Don’t jump directly to the solution, try it out yourself first.

#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> frequency(vector<int> &arr)
{
    map<int, int> mp;
    for (auto x : arr)
    {
        mp[x]++;
    }
    vector<pair<int, int>> ans;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        ans.push_back({it->first, it->second});
    }
    return ans;
}
int main()
{
    vector<int> arr{1, 2, 1, 3, 3, 3, 4, 5, 6, 6, 6, 6, 6};
    vector<pair<int, int>> ans = frequency(arr);
    for (auto x : ans)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}