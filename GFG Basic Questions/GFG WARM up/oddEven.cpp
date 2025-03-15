#include <bits/stdc++.h>
using namespace std;
void OddEven(int n)
{
    if (n & 1)
    {
        cout << "Odd";
    }
    else
    {
        cout << "Even";
    }
}
int main()
{

    OddEven(11);
    return 0;
}