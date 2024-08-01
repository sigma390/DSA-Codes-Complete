
// Count trailing zeroes in factorial of a number
#include <bits/stdc++.h>
using namespace std;

int Trailing(int N)
{
    int cnt{0};
    for (int i = 5; N / i >= 1; i *= 5)
    {

        cnt += N / i;
    }
    return cnt;
}

int main()
{
    cout << Trailing(1000);
    return 0;
}