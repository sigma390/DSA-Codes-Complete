#include <bits/stdc++.h>
using namespace std;

void display(set<int> &s)
{
    for (auto x : s)
    {
        cout << x << ",";
    }
}
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(11);
    s.insert(12);
    s.insert(13);
    s.insert(14);
    cout << "Set before deleting: \n";
    display(s);
    s.erase(13);
    cout << "\n";
    display(s);

    // find Eelement
    s.find(101) != s.end() ? cout << "\nElement Found !!" : cout << "\nNot Found !!!" << endl;
    // size of set
    cout << s.size() << endl;
    // Count Frequency of A Passed element
    cout << s.count(11) << endl;
    // upper Bound and Lower Bound
    // Find element just greater or just less than Given Eelment

    auto upp = s.upper_bound(11);
    auto loww = s.lower_bound(11);
    cout << *upp << "\n"
         << *loww;

    return 0;
}