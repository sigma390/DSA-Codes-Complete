#include <bits/stdc++.h>
using namespace std;

// BruteForce

vector<vector<int>> BruteForce(vector<int> &arr, int target)
{
    vector<vector<int>> res;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    res.push_back({arr[i], arr[j], arr[k]});
                }
            }
        }
    }
    return res;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int target = 18;
    vector<vector<int>> res1 = BruteForce(arr, target);
    // vector<int> res2 = Optimal(arr, target);

    for (auto x : res1)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    // cout << "\n=======" << endl;
    // for (auto x : res2)
    // {
    //     cout << x << " ";
    // }

    return 0;
}