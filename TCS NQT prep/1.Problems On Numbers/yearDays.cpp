#include <bits/stdc++.h>
using namespace std;

int main()
{
    int days;
    int y, w, d;
    cout << "Enter Dys" << endl;
    cin >> days;
    int remdays = days % 365;
    y = days / 365;
    w = remdays / 7;
    d = remdays % 7;
    cout << y << " years, " << w << " weeks, " << d << " days." << endl;
    return 0;
}