#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{11, 12, 13};
    arr.push_back(345);
    arr.push_back(890);
    arr.insert(arr.begin() + 3, 89);
    for (auto x : arr)
    {
        cout << x << ",";
    }
    return 0;
}