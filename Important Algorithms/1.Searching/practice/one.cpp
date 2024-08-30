

#include <bits/stdc++.h>
using namespace std;

// binary Search

bool bSearch(vector<int> arr, int k)
{

    int s = 0;
    int n = arr.size() - 1;
    int e = n;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (arr[m] == k)
            return true;
        else if (k > arr[m])
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int k = 125;
    bSearch(arr, k) ? cout << "Present" << endl : cout << "Not present" << endl;
    return 0;
}