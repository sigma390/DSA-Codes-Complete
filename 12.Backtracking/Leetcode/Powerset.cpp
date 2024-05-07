#include <iostream>
#include <vector>

using namespace std;

// Function to generate subsets using backtracking
void generateSubsets(vector<int>& nums, vector<vector<int>>& result, vector<int>& currentSubset, int index) {
    // Add the current subset to the result
    result.push_back(currentSubset);
    
    // Iterate through the elements of nums starting from the current index
    for (int i = index; i < nums.size(); i++) {
        // Include nums[i] in the current subset
        currentSubset.push_back(nums[i]);
        
        // Recursively generate subsets from the next index
        generateSubsets(nums, result, currentSubset, i + 1);
        
        // Backtrack: remove the last element added to the current subset
        currentSubset.pop_back();
    }
}

// Function to find and return all subsets of a given integer array
vector<vector<int>> findSubsets(vector<int>& nums) {
    vector<vector<int>> result; // Vector to store the subsets
    vector<int> currentSubset; // Vector to hold the current subset during backtracking
    
    // Start generating subsets using backtracking
    generateSubsets(nums, result, currentSubset, 0);
    
    return result;
}

// Function to print the subsets
void printSubsets(const vector<vector<int>>& subsets) {
    for (const auto& subset : subsets) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); i++) {
            cout << subset[i];
            if (i < subset.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]\n";
    }
}

int main() {
    // Define the input array
    vector<int> nums = {1, 2, 3};  // You can change this to any input array of unique elements
    
    // Generate all possible subsets of nums
    vector<vector<int>> subsets = findSubsets(nums);
    
    // Print the generated subsets
    cout << "All possible subsets:\n";
    printSubsets(subsets);
    
    return 0;
}
