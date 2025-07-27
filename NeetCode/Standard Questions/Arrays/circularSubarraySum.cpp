#include <bits/stdc++.h>
using namespace std;

int SubarraySumCircular(vector<int> &arr)
{
    // Approach Find max Sm and MinSum then return the Difference
    int n = arr.size();
    int CurrMax = arr[0], CurrMin = arr[0];
    int maxSum = arr[0], minSum = arr[0];
    int totalSum = arr[0];

    for (int i = 1; i < n; i++)
    {
        // max Sum
        CurrMax = max(arr[i], CurrMax + arr[i]);
        maxSum = max(maxSum, CurrMax);

        // Sum of Min Subarray
        CurrMin = min(arr[i], CurrMin + arr[i]);
        minSum = min(minSum, CurrMin);

        totalSum += arr[i];
    }

    // If all elements are negative, return maxSum
    if (totalSum == minSum)
        return maxSum;

    return max(maxSum, totalSum - minSum);
}

int main()
{

    vector<int> arr = {-3, -2, -3};
    int n = arr.size();

    int circularSum = SubarraySumCircular(arr);
    cout << "Max Circular Subarray Sum: " << circularSum << endl;

    return 0;
}
