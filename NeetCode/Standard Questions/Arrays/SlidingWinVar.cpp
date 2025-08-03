/*
    max Subarray Where The elements are in a range are equal

*/

#include <bits/stdc++.h>
using namespace std;

int maxSubArrayLength(vector<int> arr)
{

    int maxLen{0};
    int L = 0;
    for (int R = 0; R < arr.size(); R++)
    {

        if (arr[L] != arr[R]) // Until they are eQUAL Set Both values same so that the Window start From that point
        {
            L = R;
        }
        else
        {
            maxLen = max(maxLen, R - L + 1); // Comapare and update The max Length
        }
    }
    return maxLen;
}

int main()
{

    vector<int> arr = {1, 2, 2, 3, 3, 3};
    cout << maxSubArrayLength(arr);

    return 0;
}