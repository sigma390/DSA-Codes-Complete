#include <bits/stdc++.h>
#include "list.h"

using namespace std;

int main()
{
    List l;
    l.push_front(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.push_back(7);
    l.push_back(8);
    l.push_back(9);
    l.insert(10, 3);
    Node *head = l.reverse();
    l.Display(head);
    delete head;

    return 0;
}