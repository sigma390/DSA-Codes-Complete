#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int> &arr)
{

    int max_sum = INT_MIN;
    int curr_sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        curr_sum = max(0, curr_sum);
        curr_sum += arr[i];
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}

vector<int> maxSumSubarry(vector<int> &arr)
{
    vector<int> nums;
    int start = 0, end = 0;
    int max_sum = INT_MIN;
    int curr_sum = 0;
    int temp = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        curr_sum += arr[i];
        if (curr_sum < 0)
        {
            curr_sum = 0;
            temp = i + 1;
        }
        if (curr_sum > max_sum)
        {
            max_sum = max(curr_sum, max_sum);
            start = temp; // whatever the Temp is Storing as its not changed yet
            end = i;      // The current i whatever it holds
        }
    }

    for (int i = start; i <= end; i++)
    {
        nums.push_back(arr[i]);
    }
    return nums;
}

int main()
{

    vector<int> arr{4, -1, 2, -7, 3, 4};
    cout << maxSum(arr) << endl;
    vector<int> arr1 = maxSumSubarry(arr);
    cout << "*===========================*" << endl;

    for (auto x : arr1)
    {
        cout << x << ",";
    }

    return 0;
}