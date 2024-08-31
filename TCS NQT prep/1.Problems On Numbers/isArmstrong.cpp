// check if a number is Armstrong Number or not
// Problem Statement: Given an integer N, return true it is an Armstrong number otherwise return false.

// An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

// Examples
// Example 1:
// Input:N = 153
// Output:True
// Explanation: 13+53+33 = 1 + 125 + 27 = 153
// Example 2:
// Input:N = 371
// Output: True
// Explanation: 33+53+13 = 27 + 343 + 1 = 371

#include <bits/stdc++.h>
using namespace std;

bool isArm(int n)
{
    int original = n; // Preserve the original value of n
    int dig = 0;

    // Find number of digits
    int temp = n; // Use a temporary variable to calculate the number of digits
    while (temp > 0)
    {
        dig++;
        temp /= 10;
    }

    int res = 0;
    temp = n; // Use the original value for calculation

    // Calculate the sum of the powered digits
    while (temp > 0)
    {
        int rem = temp % 10;
        res += pow(rem, dig);
        temp /= 10;
    }

    return res == original; // Compare with the original value of n
}

int main()
{
    int n;
    cin >> n;
    cout << (isArm(n) ? "true" : "false") << endl; // Print true or false based on result
    return 0;
}
