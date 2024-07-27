#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a{0}, b{0}, c{0};
    cin >> a >> b >> c;

    if (a > b and a > c)
    {
        cout << "A is Greatest" << endl;
    }
    else if (a < b and b > c)
    {
        cout << "B is Greatest" << endl;
    }
    else
    {
        cout << "C is Greatest" << endl;
    }
    return 0;
}