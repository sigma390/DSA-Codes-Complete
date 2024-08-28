// 37. Write a Program to Print the Given String in Reverse Order
#include <bits/stdc++.h>
using namespace std;

void revString(string &s)
{

    reverse(s.begin(), s.end());
    cout << " revString " << s << endl;
}
int main()
{
    string s = "Pappu is Chumtiya";
    revString(s);
    return 0;
}