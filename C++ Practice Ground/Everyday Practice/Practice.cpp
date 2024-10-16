

#include <bits/stdc++.h>
using namespace std;
bool compare(int a, int b)
{
    return a > pow(b, 2);
}
void Display(map<int, int> &arr)
{
    for (auto x : arr)
    {
        cout << x.first << " " << x.second << endl;
    }
}
int main()
{
    map<int, int> arr;

    arr.insert({1, 15});
    arr.insert({4, 25});
    arr.insert({2, 23});
    arr.insert({3, 24});
    arr.insert({5, 26});

    Display(arr);
    return 0;
}