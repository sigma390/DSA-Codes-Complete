#include <bits/stdc++.h>
using namespace std;

void findDups(vector<int> &arr)
{
    int s = 0;
    for (int f = 1; f < arr.size(); f++)
    {
        if (arr[s] != arr[f])
        {
            s++;
            arr[s] = arr[f];
        }
    }
    arr.resize(s + 1);
}
int main()
{
    vector<int> arr{1, 2, 3, 3, 4};
    findDups(arr);
    for (auto x : arr)
    {
        cout << x << ",";
    }
    return 0;
}