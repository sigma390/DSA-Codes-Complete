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

// Maximum SubARRAY
vector<int> BF_MAX_subarray(int *arr, int n)
{
    long long maxSum = INT_MIN;
    int start = 0;
    int end = 0;
    for (int i = 0; i < n; i++)
    {
        int currSum = 0;
        for (int j = i; j < n; j++)
        {
            currSum += arr[j];
            // Compare and get Indices
            if (currSum > maxSum)
            {
                maxSum = currSum;
                start = i;
                end = j;
            }
        }
    }
    vector<int> subarray;
    for (int i = start; i <= end; i++)
    {
        subarray.push_back(arr[i]);
    }

    return subarray;
}

// optimised O(N)

int kadaneOptimised(int *arr, int n)
{
    int maxSum = INT_MIN;

    int currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum = max(currSum, 0);
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

vector<int> KadaneOptimisedSubarry(int *arr, int n)
{
    int maxSum = INT_MIN;
    int currSum = 0;
    vector<int> Subarray;
    int start = 0, end = 0;
    int tempStart = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
        {
            currSum = 0;       // Reset the Current Sum
            tempStart = i + 1; // Move the Pointer
        }

        if (maxSum < currSum)
        {
            maxSum = currSum;
            start = tempStart;
            end = i;
        }
    }

    // make AN array here
    for (int i = start; i <= end; i++)
    {
        Subarray.push_back(arr[i]);
    }
    return Subarray;
}

int main()
{
    int arr[] = {
        4, -1, 2, -7, 3, 4

    };
    cout << "The max Sum of Given Array is: " << BruteFORCE(arr, 6);
    vector<int> result = BF_MAX_subarray(arr, 6);
    cout << "The max subarray is:";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << ", ";
    }

    cout << "\n This is max Subarray Sum otimised Version : " << kadaneOptimised(arr, 6);
    vector<int> optimisedSubarry = KadaneOptimisedSubarry(arr, 6);
    cout << "\n=================> \n";
    for (int i = 0; i < optimisedSubarry.size(); i++)
    {
        cout << optimisedSubarry[i] << ", ";
    }
}