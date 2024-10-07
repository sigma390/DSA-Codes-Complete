

#include <bits/stdc++.h>
using namespace std;
bool compare(int a, int b)
{
    return a > pow(b, 2);
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

    arr.push_back(23);
    arr.push_back(24);
    arr.push_back(25);
    arr.push_back(26);
    arr.push_back(27);
    arr.push_back(28);
    arr.push_back(29);
    arr.pop_back();
    arr.insert(arr.begin() + 3, 45);
    cout << arr.size() << endl;
    cout << accumulate(arr.begin(), arr.end(), 0) << endl;
    sort(arr.begin(), arr.end(), compare);

    Display(arr);

    return 0;
}