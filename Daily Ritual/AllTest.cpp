#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(11);
    s.insert(22);
    s.insert(33);
    s.insert(44);
    for (auto x : s)
    {
        cout << x << ",";
    }
    set<int> st;
    vector<int> arr{23, 34, 678, 1};

    for (auto x : arr)
    {
        st.insert(x);
    }
    cout << "\nthis is Set Formed out Of a Vector" << endl;
    for (auto x : st)
    {
        cout << x << ",";
    }
    cout << ((st.find(678) != st.end()) ? "Found\n" : "not Found\n") << endl;
    cout << st.count(6) << endl;
    cout << st.count(678) << endl;
    return 0;
}