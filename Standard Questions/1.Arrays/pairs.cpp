

#include <bits/stdc++.h>
using namespace std;

vector<int> bruteForce(vector<int> arr, int sum)

{

    vector<int> ans;
    for (int i = 0; i <= arr.size() - 2; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] + arr[i] == sum)
            {
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
        }
    }
    return ans;
}

// sort and Search method

// binray Search Helper Function

bool binary_search(vector<int> ans, int x)
{
    sort(ans.begin(), ans.end());
    int low = 0;
    int high = ans.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // If x is greater, ignore left half
        if (ans[mid] < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else if (ans[mid] > x)
            high = mid - 1;

        // x is present at mid
        else
            return true;
    }
    return false;
}

vector<int> Optimal(vector<int> arr, int sum)
{

    vector<int> ans = arr;
    vector<int> res;

    for (int i = 0; i < ans.size(); i++)
    {
        if (binary_search(ans, sum - ans[i]))
        {
            res.push_back(arr[i]);
            res.push_back(sum - ans[i]);
        }
    }
    return res;
}

// Most Optimal Approach Using sets

vector<int> MostOptimal(vector<int> arr, int sum)
{
    vector<int> res;
    unordered_set<int> x;
    for (int i = 0; i < arr.size(); i++)
    {
        int ele = sum - arr[i];
        if (x.find(ele) != x.end())
        {
            res.push_back(arr[i]);
            res.push_back(ele);
        }
        x.insert(arr[i]);
    }
    return res;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    vector<int> result = bruteForce(arr, 5);
    vector<int> result2 = Optimal(arr, 5);
    vector<int> result3 = MostOptimal(arr, 5);
    for (auto x : result)
    {
        cout << x << " ";
    }
    cout << endl;
    for (auto x : result)
    {
        cout << x << " ";
    }
    cout << endl;
    for (auto x : result3)
    {
        cout << x << " ";
    }

    return 0;
}