#include <bits/stdc++.h>
#include "heap.h"

using namespace std;

int main()
{

    Heap h(10, "min");
    int n;
    cin >> n;
    int x;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        h.Push(x);
    }
    h.print();
    h.pop();
    h.print();

    return 0;
}