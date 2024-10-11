#include <bits/stdc++.h>
#include "stack.h"
using namespace std;

int main()
{
    Stack<string> stk;
    stk.push("Hello");
    stk.push("World");
    stk.push("I");
    stk.push("am");
    stk.push("Omkar");
    cout << stk.top() << endl;
    // display Stack
    while (!stk.isEmpty())
    {
        cout << stk.top() << endl;
        stk.pop();
    }

    return 0;
}