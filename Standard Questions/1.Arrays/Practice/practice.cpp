#include <bits/stdc++.h>
using namespace std;

vector<int> BruteForce(vector<int> &arr, int sum)
{
    vector<int> res;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                res.push_back(arr[i]);
                res.push_back(arr[j]);
            }
        }
    }
    return res;
}

bool BinSearch(vector<int> ans, int x)

{
    sort(ans.begin(), ans.end());
    int s = 0, e = ans.size() - 1;

    while (s <= e)
    {

        int mid = s + (e - s) / 2;

        // If x is greater, ignore left half
        if (ans[mid] < x)
            s = mid + 1;

        // If x is smaller, ignore right half
        else if (ans[mid] > x)
            e = mid - 1;

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
        if (BinSearch(ans, sum - ans[i]))
        {
            res.push_back(arr[i]);
            res.push_back(sum - ans[i]);
        }
    }
    return res;
}

vector<int> MostOptimal(vector<int> arr, int sum)
{
    unordered_set<int> st;
    vector<int> res;
    for (int i = 0; i < arr.size(); i++)
    {
        int x = sum - arr[i];
        if (st.find(x) != st.end())
        {
            res.push_back(arr[i]);
            res.push_back(x);
            break;
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
    for (auto x : res1)
    {
        cout << x << " ";
    }

    cout << "\n=======" << endl;
    for (auto x : res2)
    {
        cout << x << " ";
    }
    cout << "\n=======" << endl;
    for (auto x : res3)
    {
        cout << x << " ";
    }
    return 0;
}