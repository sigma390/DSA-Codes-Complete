#include <bits/stdc++.h>
#include "list.h"
using namespace std;

int main()
{
    cout << "Linked List Demo" << endl;

    List l;
    l.Push_front(10);
    l.Push_rear(20);
    l.Push_rear(30);
    l.Push_rear(40);
    l.Push_rear(50);
    cout << "Original List: ";
    l.Display(l.begin());
    cout << "\n"
         << l.getLength(l.begin());
    l.deleteAt(l.begin(), 3);
    cout << "\n";
    l.Display(l.begin());
    return 0;
}