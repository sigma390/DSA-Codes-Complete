// 25. Write a Program to Calculate the Sum of Elements in an Array

#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> arr)
{
    // accumulatee MEthod
    int sum = accumulate(arr.begin(), arr.end(), 0);
    return sum;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "Sum of elements in the array: " << sum(arr) << endl; // Calling the sum function and printing the result

    return 0;
}