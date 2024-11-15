#include <bits/stdc++.h>
using namespace std;

// BruteForce
vector<int> BruteForce(vector<int> &arr, int sum)
{
    vector<int> res;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                res.push_back(arr[i]);
                res.push_back(arr[j]);
                return res;
            }
        }
    }
    return res;
}

// helper Function
bool binarySearch(vector<int> arr, int s)
{
    sort(arr.begin(), arr.end());
    int l = 0, r = arr.size() - 1;
    while (l < r)
    {
        if (arr[l] + arr[r] == s)
            return true;
        else if (arr[l] + arr[r] < s)
            l++;
        else
            r--;
    }
    return false;
}

// Optimal Approach

vector<int> Optimal(vector<int> arr, int sum)
{
    vector<int> res;
    for (int i = 0; i < arr.size(); i++)
    {
        if (binarySearch(arr, sum - arr[i]))
        {
            res.push_back(arr[i]);
            res.push_back(sum - arr[i]);
        }
    }
    return res;
}

// Most Optimal
vector<int> MostOptimal(vector<int> arr, int sum)
{
    vector<int> res;
    unordered_set<int> st;
    for (int i = 0; i < arr.size(); i++)
    {
        int x = sum - arr[i];
        if (st.find(x) != st.end())
        {
            res.push_back(arr[i]);
            res.push_back(x);
            break; // Stop as soon as we find a pair that sums up to the target.
        }
        st.insert(arr[i]);
    }
    return res;
}
int main()
{

    vector<int> arr{1, 2, 3, 9, 6, 8};
    int sum = 4;
    vector<int> res1 = BruteForce(arr, sum);
    vector<int> res2 = Optimal(arr, sum);
    vector<int> res3 = MostOptimal(arr, sum);
    cout << res1[0] << "," << res1[1] << endl;
    cout << res2[0] << "," << res2[1] << endl;
    cout << res3[0] << "," << res3[1] << endl;

    return 0;
}