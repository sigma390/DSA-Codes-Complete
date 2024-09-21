#include <bits/stdc++.h>
#include "stack.h"

using namespace std;

int main()
{
    Stack<int> s;
    s.push(10);
    s.push(23);
    cout << s.isEmpty();
    s.pop();

    return 0;
}