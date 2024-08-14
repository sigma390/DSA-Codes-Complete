#include <bits/stdc++.h>
#include "stack.h"

using namespace std;

int main()
{
    Stack<string> stk;
    stk.push("Hello");
    stk.push("World");
    stk.pop();
    stk.push("its me");
    cout << stk.top() << endl;
    // print
    while (!stk.isEmpty())
    {
        cout << stk.top() << "\n";
        stk.pop();
    }
    return 0;
}
