#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (auto x : arr)
    {
        for (auto y : x)
        {
            cout << y << ",";
        }
    }
    cout << "\n*=========================*" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[1].size(); j++)
        {
            cout << arr[i][j] << ",";
        }
    }

    return 0;
}