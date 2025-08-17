#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> pr(10, 12);
    pair<pair<string, int>, pair<int, int>> dpr({"Omkar", 11}, {12, 13});
    vector<pair<int, int>> arr(10, {1, 2});
    for (auto x : arr)
    {
        cout << x.first << "and" << x.second << endl;
    }
    cout << "=============" << endl;

    cout << dpr.first.first << " this is First  of the First" << endl;
    cout << dpr.first.second << " this is Second  of the First" << endl;

    cout << pr.first << " and " << pr.second << endl;
    return 0;
}