// Check if a number is Palindrome or Not

// 95

// 1
// Problem Statement: Given an integer N, return true if it is a palindrome else return false.

// A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.

// Examples
// Example 1:
// Input:N = 4554
// Output:Palindrome Number
// Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number
// Example 2:
// Input:N = 7789
// Output: Not Palindrome
// Explanation: The reverse of number 7789 is 9877 and therefore it is not palindrome

#include <bits/stdc++.h>
using namespace std;

// shortcut Approach
bool isPAL(int n)
{
    string a = to_string(n);
    string b = a;
    reverse(b.begin(), b.end());
    return a == b;
}

// basic Approach
bool isPalin(int n)
{
    int rev = 0, temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    return rev == n; // return true if reverse is equal to original number else false  // 95
}
int main()
{
    int n;
    cin >> n;
    cout << isPAL(n) << endl;
    cout << isPalin(n) << endl;

    return 0;
}