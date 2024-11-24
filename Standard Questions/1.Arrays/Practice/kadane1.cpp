#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int> arr)
{
    int curr_sum = 0;
    int max_sum = INT_MIN;
    for (auto x : arr)
    {
        curr_sum = max(curr_sum, curr_sum + x);
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}

int main()
{
    vector<int> arr{-2, 1, 3, -10, 5, 6};
    int n = arr.size();
    cout << maxSum(arr);
    return 0;
}