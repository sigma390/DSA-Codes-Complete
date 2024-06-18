#include <bits/stdc++.h>
using namespace std;

long long maximumSubarraySum(vector<int>& nums, int k) {
    int i = 0;
    int j = 0;
    long long max_sum_till = 0;
    long long win_sum = 0;
    unordered_map<int, int> mapp;

    while (j < nums.size()) {
        // Add current element to window sum and update its count
        win_sum += nums[j];
        mapp[nums[j]]++;

        // Calculate window length
        int win_len = j - i + 1;

        // If window length exceeds k or there are duplicate elements
        while (win_len > k || mapp[nums[j]] > 1) {
            win_sum -= nums[i]; // Remove the element at start of the window
            mapp[nums[i]]--; // Decrease its count
            if (mapp[nums[i]] == 0) {
                mapp.erase(nums[i]); // Remove element from map if count is zero
            }
            i++; // Shrink the window from the left
            win_len = j - i + 1; // Recalculate window length
        }

        // If the window length is exactly k, update the maximum sum
        if (win_len == k) {
            max_sum_till = max(max_sum_till, win_sum);
        }

        // Move to the next element
        j++;
    }

    return max_sum_till;
}

int main() {
    vector<int> nums = {1, 5, 4, 2, 9, 9, 9};
    int k = 3;
    cout << maximumSubarraySum(nums, k) << endl; // Output: 15
    return 0;
}
