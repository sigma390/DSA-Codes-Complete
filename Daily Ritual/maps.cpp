#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp = {{"Hi", 12}, {"Omkar", 11}, {"Richa", 14}, {"Here", 5}};
    cout << mp["Richa"] << endl;
    for (auto x : mp)
    {
        cout << x.first << "This is key Element" << endl;
    }
    cout << ((mp.find("Richa") != mp.end()) ? "Found Richa" : "Lost Richa") << endl;
    cout << mp.count("Omkar") << endl;
    return 0;
}