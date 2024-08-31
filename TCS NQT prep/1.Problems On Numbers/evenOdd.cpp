// Even Or Oddd

#include <bits/stdc++.h>
using namespace std;
string num(int n)
{
    return n & 1 ? "Odd" : "even";
}

int main()
{
    int n;
    cin >> n;
    cout << num(n) << endl;
    return 0;
}