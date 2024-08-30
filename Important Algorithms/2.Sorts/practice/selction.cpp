#include <bits/stdc++.h>
using namespace std;

void selection(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i <= n - 2; i++) // to till second last element
    {
        int min = i;                    // initiate min with i
        for (int j = i + 1; j < n; j++) // skip repition
        {
            if (arr[j] < arr[min]) // means min element is larger than current
            {
                min = j; // update min current
            }
        }
        swap(arr[i], arr[min]); // its time to swap the min and the ith element
    }
}

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};
    selection(arr);
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}