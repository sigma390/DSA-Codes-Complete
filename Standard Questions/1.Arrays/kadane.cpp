#include <bits/stdc++.h>
using namespace std;
int maxSum(vector<int> arr)
{
    int cs = 0, ms = INT_MIN;
    for (auto x : arr)
    {
        cs = max(cs, cs + x);
        ms = max(cs, ms);
    }
    return ms;
}

int main()
{
    vector<int> arr{-2, 1, 3, -10, 5, 6};
    int n = arr.size();
    cout << maxSum(arr);
    return 0;
}