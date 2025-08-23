#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> arr(3, vector<int>(10, 0)); // meaning
    // there will be 3 rows and each Row is A Vector with 10 elements Initiated To 0
    for (auto x : arr)
    {
        for (auto y : x)
        {
            cout << y << ",";
        }
    }

    return 0;
}