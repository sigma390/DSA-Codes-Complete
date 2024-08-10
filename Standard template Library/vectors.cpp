#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    // push elements at back
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    // print size of vector
    cout << "size of vector : " << v.size() << endl;
    // print all elements of vector
    for (auto &&i : v)
    {
        cout << " " << i << endl;
    }

    // pop element from back
    v.pop_back(); // last element is removed
    cout << "\n----------------" << endl;
    for (auto &&i : v)
    {
        cout << " " << i;
    }
    // insert element at front
    v.insert(v.begin(), 777); // 777 is inserted at the beginning
    cout << "\n----------------" << endl;
    for (auto &&i : v)
    {
        cout << " " << i;
    }
    // reverse a vector
    reverse(v.begin(), v.end());

    // iterator
    cout << "\n----------------" << endl;
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << " " << *it;

    // vector initilaization
    cout << endl;
    vector<int> vec2(20, 1);
    for (auto &&i : vec2)
    {
        cout << i << " ";
    }

    // 2d vector
    vector<vector<int>> vec3(3, vector<int>(4, 11));
    for (auto &&i : vec3)
    {
        for (auto &&j : i)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}