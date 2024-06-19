#include <bits/stdc++.h>
using namespace std;
//link https://leetcode.com/problems/sliding-subarray-beauty/submissions/1293689765/



vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
    vector<int> result;
    int n = nums.size();

    for (int i = 0; i <= n - k; ++i) {
        vector<int> negatives;

        // Collect negative numbers in the current subarray of size k
        for (int j = i; j < i + k; ++j) {
            if (nums[j] < 0) {
                negatives.push_back(nums[j]);
            }
        }

        // Sort the negative numbers
        sort(negatives.begin(), negatives.end());

        // Determine the xth smallest negative number
        if (negatives.size() >= x) {
            result.push_back(negatives[x - 1]);
        } else {
            result.push_back(0);
        }
    }

    return result;
}

int main() {
    vector<int> nums = {1, -1, -3, -2, 3};
    int k = 3;
    int x = 2;
    vector<int> result = getSubarrayBeauty(nums, k, x);
    for (int beauty : result) {
        cout << beauty << " ";
    }
    cout << endl; // Output: -1 -2 -2
    return 0;
}
