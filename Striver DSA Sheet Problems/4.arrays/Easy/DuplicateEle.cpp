#include <bits/stdc++.h>
using namespace std;

int isDuplicate(vector<int> &arr, int n) {
    if (n == 0) // handle empty vector
        return 0;

    int i = 0;
    for (auto it = arr.begin() + 1; it != arr.end(); it++) {
        
        if (arr[i] != *it) {
            i++;
            arr[i] = *it; 
        }
    }
    return i + 1; 
}

int main() {
    vector<int> arr = {0, 11, 22, 22, 33, 44, 44, 44, 44}; //expected  4
    int n = arr.size();
    int r = isDuplicate(arr, n);
    cout << r << endl;

    for (int i = 0; i < r; i++) {
        cout << arr[i] << ",";
    }

    return 0;
}
