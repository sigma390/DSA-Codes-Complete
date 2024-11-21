#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return n & 1 ? 1 : 0;
}

int main()
{
    cout << isPrime(15) << endl;

    return 0;
}