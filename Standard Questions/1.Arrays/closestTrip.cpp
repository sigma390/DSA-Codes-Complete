#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &arr, int target)
{
    // Sort the array to use the two-pointer approach
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int closestSum = arr[0] + arr[1] + arr[2]; // Initialize with the first three elements' sum

    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int currentSum = arr[i] + arr[j] + arr[k];

            // Check if this is closer to the target than the previous closest sum
            if (abs(currentSum - target) < abs(closestSum - target))
            {
                closestSum = currentSum;
            }

            if (currentSum == target)
            {
                // If the current sum is exactly equal to the target, return it
                return currentSum;
            }
            else if (currentSum < target)
            {
                // Move the left pointer to increase the sum
                j++;
            }
            else
            {
                // Move the right pointer to decrease the sum
                k--;
            }
        }
    }

    return closestSum;
}

int main()
{
    vector<int> arr = {-1, 2, 1, -4};
    int target = 1;
    int result = threeSumClosest(arr, target);
    cout << "The sum closest to " << target << " is: " << result << endl;
    return 0;
}
