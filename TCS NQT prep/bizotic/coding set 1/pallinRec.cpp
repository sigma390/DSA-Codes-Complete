// PROGRAM 11
// Write a program to verify whether a given string is a palindrome or not using recursion. A string is palindrome if
// the string is same as the reverse of the string. The input consists of a single line containing an string. Print yes or no
// based on whether the string is palindrome or not.
// Sample Input and Output:
// Input:
// 21
// Output:
// no
// Test Case 1
// Input
// 1122
// Output
// no
// Test Case 2
// Input
// madam
// Output
// yes

#include <bits/stdc++.h>
using namespace std;
bool isPalin(const string &str, int s, int e)
{
    // base case start ==end
    if (s >= e)
        return true;

    // if characters at start and end are not same, then it's not a palindrome
    if (str[s] != str[e])
        return false;

    // else check for substring from start+1 and end-1
    return isPalin(str, s + 1, e - 1);
}

int main()
{
    string s{"abb"};
    cout << isPalin(s, 0, s.size() - 1);
    return 0;
}
