#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60};

    priority_queue<int> h; // default Max Heap
    // heap me elements Push kro
    // for Ascending order
    // priority_queue<int , vector<int>, greater<int> > heap;
    for (int i = 0; i < arr.size(); i++)
    {
        h.push(arr[i]);
    }

    // elements Dekhna hai
    while (!h.empty())
    {
        cout << h.top() << ",";
        h.pop();
    }
    // heap Sorts Elements In Acending or Descending order
    return 0;
}