#include <bits/stdc++.h>
using namespace std;

void Goat(int a, int b, int c)
{
    if ((a > b) and (b > c))
    {
        cout << "The Greatest Number is : " << a;
    }
    else if ((b > a) and (a > c))
    {
        cout << "The Greatest Number is : " << b;
    }
    else
    {
        cout << "The Greatest Number is : " << c;
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    Goat(a, b, c);
    return 0;
}