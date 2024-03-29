#include <bits/stdc++.h>
using namespace std;

void selection(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            swap(arr[i], arr[min]);
        }
    }
    for (auto i : arr) {
        cout << i << ",";
    }
}

int main() {
    vector<int> arr = {1, 75, 6, 89,1, 44, 23, 75, 895};
    int n = arr.size();
    selection(arr, n);
    return 0;
}
