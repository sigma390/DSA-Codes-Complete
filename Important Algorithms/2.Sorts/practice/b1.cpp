#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j + 1] < arr[j])
                swap(arr[j], arr[j + 1]);
        }
    }
}

int main()
{
    vector<int> arr = {4, 2, 9, 1, 5};
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << "\n--------------------------------" << endl;
    bubbleSort(arr);
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}