#include <bits/stdc++.h>
#include "stk.h"
using namespace std;

int main()
{
    Stck<string> s;
    s.Push("great");
    s.Push("is");
    s.Push("Omkar");

    while (!s.isEmpty())
    {
        cout << s.Top() << endl;
        s.Pop();
    }

    return 0;
}