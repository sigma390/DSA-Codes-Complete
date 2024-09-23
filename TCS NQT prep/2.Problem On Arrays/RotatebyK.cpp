// Rotate array by K elements
#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> &arr, int k)
{
    int n = arr.size();
    // normalise incase k>n
    k = k % n;

    // reverse 1st k elements
    reverse(arr.begin(), arr.begin() + k);

    // reverse remaining elemnt
    reverse(arr.begin() + k, arr.end());

    // reverse whole array
    reverse(arr.begin(), arr.end());
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};
    int k = 2;
    rotate(arr, k);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}