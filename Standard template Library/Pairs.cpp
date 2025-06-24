#include <bits/stdc++.h>
using namespace std;

int main()
{

    pair<int, int> p = {10, 23};
    pair<string, int> q = {"pappu", 45};

    //===> Swapping of pairs
    vector<pair<int, int>> arr11{{1, 3}, {4, 5}};
    for (auto x : arr11)
    {
        cout << x.first << "," << x.second << endl;
    }
    swap(arr11[0], arr11[1]);

    cout << "==========" << endl;
    for (auto x : arr11)
    {
        cout << x.first << "," << x.second << endl;
    }

    //===>  pair of pairs
    pair<pair<int, int>, pair<string, double>> x = {{1, 7}, {"Omkar", 11.11}};

    //=====> array of pairs
    pair<int, int> arr[] = {{1, 2}, {1, 3}};

    // accessing elements of
    cout << p.first << " " << p.second << endl;
    cout << q.first << " " << q.second << endl;
    cout << x.first.first << " " << x.first.second << " " << x.second.first << " " << x.second.second << endl;
    cout << arr[1].second << endl;
    return 0;
}