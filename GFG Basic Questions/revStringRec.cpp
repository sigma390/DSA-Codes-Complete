// 38. rev string using Recursion

#include <bits/stdc++.h>
using namespace std;

void rev(string &s, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    // swap elements
    swap(s[start], s[end]);
    rev(s, start + 1, end - 1);
}

int main()
{
    string s = "hello";
    rev(s, 0, s.length() - 1);
    cout << s << endl;
    return 0;
}