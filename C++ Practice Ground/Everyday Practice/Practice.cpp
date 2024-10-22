

#include <bits/stdc++.h>
using namespace std;
bool compare(int a, int b)
{
    return a > pow(b, 2);
}
void Display(map<int, int> &arr)
{
    for (auto x : arr)
    {
        cout << x.first << " " << x.second << endl;
    }
}

void groupIt(vector<string> &fruits)
{
    map<int, string> mp;
    for (auto x : fruits)
    {
        if (mp.find(x.length()) != mp.end())
        {
            mp[x.length()] += "," + x;
        }
        else
        {
            mp.insert({x.length(), x});
        }
    }
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
}

int main()
{
    map<int, int> arr;
    vector<string> fruits = {"apple", "banana", "orange", "grapefruit", "kiwi", "mango", "strawberry"};

    // Display the fruits grouped by length
    groupIt(fruits);

    return 0;
}