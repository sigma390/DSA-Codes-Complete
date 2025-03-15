#include <bits/stdc++.h>
using namespace std;

void PosNeg(int n)
{
    if (n > 0)
    {
        cout << "the Number " << n << "Is Positive" << endl;
    }
    else
    {
        cout << n << "is not positive" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << endl;
    PosNeg(n);

    return 0;
}