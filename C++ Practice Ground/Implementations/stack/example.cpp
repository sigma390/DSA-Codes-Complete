

#include <bits/stdc++.h>
#include "stack.h"

using namespace std;

int main()
{
    Stack<int> vv;
    vv.push(1);
    vv.push(2);
    vv.push(3);
    vv.push(4);
    vv.push(5);

    // print Stack

    while (!vv.isEmpty())
    {
        cout << vv.top() << endl;
        vv.pop();
    }

    return 0;
}