#include <bits/stdc++.h>
using namespace std;

string rev(string s)
{
    stack<string> stk;
}

int main()
{
    string s = "Omakr";
    for (int i = 0; i < s.size() / 2; i++)
    {
        swap(s[i], s[s.size() - i - 1]);
    }
    cout << s;
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)