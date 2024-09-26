// Write a program to print all the combinations of the given word with or without meaning (when unique characters
// are given).
// Sample Input: abc
// Output:
// abc
// acb
// bac
// bca
// cba
// cab
// Solution:
// Input: hai

#include <bits/stdc++.h>
using namespace std;

void perms(string &s, int l, int r)
{
    if (l == r)
        cout << s << "\n";
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(s[l], s[i]);   // fixing chars
            perms(s, l + 1, r); // hit base case and then return to backtract
            swap(s[l], s[i]);   // undo swapping
        }
    }
}
int main()
{
    string s = "abc";
    perms(s, 0, s.size() - 1);
    return 0;
}
