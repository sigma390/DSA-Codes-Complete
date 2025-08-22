#include <bits/stdc++.h>
using namespace std;

pair<int, int> indices(vector<int> &arr, int k)
{
    int L = 0;
    int R = arr.size() - 1;
    while (L < R)
    {
        if (arr[L] + arr[R] > k)
        {
            R--;
        }
        else if (arr[L] + arr[R] < k)
        {
            L++;
        }
        else
        {
            return {L, R};
        }
    }
    return {-1, -1};
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 7, 9, 18};
    pair<int, int> ans = indices(arr, 199);
    cout << ans.first << endl;
    cout << ans.second << endl;
    return 0;
}