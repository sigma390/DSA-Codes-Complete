// 23. Write a Program to Find the Smallest and Largest Element in an Array

#include <bits/stdc++.h>
using namespace std;

pair<int, int> smallAndLarge(vector<int> arr)
{
    int end = arr.size() - 1;
    sort(arr.begin(), arr.end());
    return {arr[0], arr[end]};
}

int main()
{
    vector<int> arr = {12, 34, 10, 6, 40};
    pair<int, int> result = smallAndLarge(arr);
    cout << "Smallest Element: " << result.first << endl;
    cout << "Largest Element: " << result.second << endl;
    return 0;
}