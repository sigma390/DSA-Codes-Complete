// problem :  Triplets with Sum between given range

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> triplets(vector<int> arr, int sum)
{

    // Appproach Is simple we will sort the array and then we will use two pointer approach to find the triplets
    // Time Complexity: O(n^2)
    sort(arr.begin(), arr.end());

    int n = arr.size();

    vector<vector<int>> res; // to store Triplets
    for (int i = 0; i < n - 2; i++)

    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            // match the sum
            int currentSum = arr[i];

            if (currentSum + arr[j] + arr[k] == sum)
            {
                res.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
                // Skip duplicates for j
                while (j < k && arr[j] == arr[j - 1])
                    j++;

                // Skip duplicates for k
                while (j < k && arr[k] == arr[k + 1])
                    k--;
            }
            else if (currentSum + arr[j] + arr[k] < sum)
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
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int sum = 18;
    vector<vector<int>> res = triplets(arr, sum);
    for (auto &&i : res)
    {
        for (auto &&j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}