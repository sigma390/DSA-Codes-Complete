#include <bits/stdc++.h>
using namespace std;

void mergeArray(vector<int> &arr, int s, int e)
{
    // Create a temporary array to keep merged elements
    vector<int> temp;

    // Calculate the midpoint
    int m = (s + e) / 2;

    // Indices for the two halves
    int i = s;
    int j = m + 1;

    // Merge the two halves
    while (i <= m && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }

    // Copy any remaining elements from the left half
    while (i <= m)
        temp.push_back(arr[i++]);

    // Copy any remaining elements from the right half
    while (j <= e)
        temp.push_back(arr[j++]);

    // Copy the merged elements back into the original array
    int k = 0;
    for (int idx = s; idx <= e; ++idx)
    {
        arr[idx] = temp[k++];
    }
}

void mergeSort(vector<int> &arr, int s, int e)
{
    // Base case
    if (s >= e)
        return;

    // Recursive case
    int m = (s + e) / 2;
    mergeSort(arr, s, m);
    mergeSort(arr, m + 1, e);

    mergeArray(arr, s, e);
}

int main()
{
    vector<int> arr{0, 2, 7, 6, 3, 8, 5, 4, 9};
    int s = 0;
    int e = arr.size() - 1;
    mergeSort(arr, s, e);

    for (auto &&i : arr)
    {
        cout << i << " , ";
    }

    return 0;
}
