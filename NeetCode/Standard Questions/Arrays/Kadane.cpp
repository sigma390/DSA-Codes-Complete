#include <bits/stdc++.h>
using namespace std;

int BruteFORCE(int *arr, int n)
{
    long long maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int currSum = 0;
        for (int j = i; j < n; j++)
        {
            currSum += arr[j];
            maxSum = max(currSum, (int)maxSum);
        }
    }

    return (int)maxSum;
}

int main()
{
    int arr[] = {
        4, -1, 2, -7, 3, 4

    };
    cout << "The max Sum of Given Array is:" << BruteFORCE(arr, 6);
}