#include <bits/stdc++.h>
using namespace std;

int lowerBound(int arr[], int k, int n)
{
    int s = 0;
    int e = n - 1;
    int ans = -1; // Initialize ans to -1, which will be returned if k is not found

    while (s <= e)
    {
        int m = s + (e - s) / 2; // Calculate middle index to avoid overflow

        if (arr[m] == k)
        {
            ans = m;   // Update ans to the current middle index
            e = m - 1; // Move left to find the first occurrence
        }
        else if (arr[m] > k)
        {
            e = m - 1; // Move left
        }
        else
        {
            s = m + 1; // Move right
        }
    }
    return ans; // Return the index of the first occurrence or -1 if not found
}

int main()
{
    int arr[] = {0, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 5, 5, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int result = lowerBound(arr, k, n);

    if (result != -1)
        cout << "Lower bound of " << k << " is at index " << result << endl;
    else
        cout << "Value " << k << " not found in the array." << endl;

    return 0;
}
