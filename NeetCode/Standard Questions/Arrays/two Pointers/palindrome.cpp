#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(vector<int> &arr)
{
    int L = 0;
    int R = arr.size() - 1;
    while (L < R)
    {
        if (arr[L] != arr[R])
        {
            return false;
        }
        L++;
        R--;
    }
    return true;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 1};
    cout << isPalindrome(arr);
    return 0;
}