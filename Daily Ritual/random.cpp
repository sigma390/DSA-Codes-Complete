#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp{{"Richa", 1}, {"Om", 2}, {"Jui", 3}};

    cout << (mp.find("Richa") != mp.end()) << endl;

    if (mp.count("Richa"))
    {
        cout << "She is THERE" << endl;
        cout << mp.count("Richa") << endl;
    }
    else
    {
        cout << "She is Not There" << endl;
    }

    mp.insert({"HI", 90});
    for (auto x : mp)
    {
        cout << x.first << "Always Will be " << x.second << endl;
    }
    mp.erase("Richa");
    cout << (mp.find("Richa") != mp.end()) << endl;
    return 0;
}