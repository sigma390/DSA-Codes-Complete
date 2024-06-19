#include <bits/stdc++.h>
using namespace std;

int maxScore(vector<int>& cardPoints, int k) {
    int n = cardPoints.size();
    int total_sum = accumulate(cardPoints.begin(), cardPoints.end(), 0); // Total sum of all card points
    int min_subarray_sum = INT_MAX; // Initialize to a large value
    int current_subarray_sum = 0;
    int window_size = n - k;
    
    // Calculate sum of the initial window of size n-k
    for (int i = 0; i < window_size; ++i) {
        current_subarray_sum += cardPoints[i];
    }
    min_subarray_sum = current_subarray_sum;
    
    // Slide the window across the array
    for (int i = window_size; i < n; ++i) {
        current_subarray_sum += cardPoints[i] - cardPoints[i - window_size];
        min_subarray_sum = min(min_subarray_sum, current_subarray_sum);
    }
    
    return total_sum - min_subarray_sum; // Maximum score
}

int main() {
    vector<int> cardPoints = {1, 2, 3, 4, 5, 6, 1};
    int k = 3;
    cout << maxScore(cardPoints, k) << endl; // Output: 12
    return 0;
}
