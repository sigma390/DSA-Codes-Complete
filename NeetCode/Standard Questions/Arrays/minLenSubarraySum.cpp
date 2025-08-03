#include <bits/stdc++.h>
using namespace std;

int minLenSubArray(vector<int> arr, int target)
{

    int CurrSum = 0, L = 0;
    int minLen = INT_MAX;

    // iterate and Increase the Total
    for (int R = 0; R < arr.size(); R++)
    {

        CurrSum += arr[R];
        while (CurrSum >= target)
        {
            minLen = min(R - L + 1, minLen);
            CurrSum -= arr[L];
            L += 1;
        }
    }

    return minLen;
}

int main()
{
    vector<int> arr{2, 3, 1, 2, 4, 3, 6};
    cout << minLenSubArray(arr, 6);

    return 0;
}