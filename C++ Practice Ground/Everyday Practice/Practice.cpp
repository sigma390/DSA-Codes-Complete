

#include <bits/stdc++.h>
using namespace std;
bool compare(int a, int b)
{
    return a > b;
}
void Display(vector<int> &arr)
{
    for (auto x : arr)
    {
        cout << x << ",";
    }
}
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.emplace_back(5);
    arr.pop_back();
    arr.insert(arr.begin(), 56);
    cout << arr[0] << endl;

    sort(arr.begin(), arr.end(), compare);
    Display(arr);
    return 0;
}