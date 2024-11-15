#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> BruteForce(vector<int> &arr, int target)
{
    vector<vector<int>> triplets;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    triplets.push_back({arr[i], arr[j], arr[k]});
                }
            }
        }
    }
    return triplets;
}

vector<vector<int>> Optimal(vector<int> &arr, int targetSum)
{

    vector<vector<int>> res;
    for (int i = 0; i < arr.size() - 2; i++)
    {
        int j = i + 1;
        int k = arr.size() - 1;
        while (j < k)
        {
            int currSum = arr[i];
            if (currSum + arr[j] + arr[k] == targetSum)
            {
                res.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
                while (j < k and arr[j] == arr[j - 1])
                {
                    j++;
                }
                while (j < k and arr[k] == arr[k + 1])
                {
                    k--;
                }
            }
            else if (targetSum > currSum + arr[k] + arr[j])
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return res;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int target = 18;
    vector<vector<int>> triplets = BruteForce(arr, target);
    vector<vector<int>> triplets2 = Optimal(arr, target);
    for (auto x : triplets)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    cout << "==================================" << endl;
    for (auto x : triplets2)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}