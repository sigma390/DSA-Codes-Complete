#include <bits/stdc++.h>
#include "Queue.h"

using namespace std;

int main()
{

    Queue myQ(7);
    myQ.push(1);
    myQ.push(2);
    myQ.push(3);
    myQ.push(4);
    myQ.push(5);
    myQ.push(6);
    myQ.pop();
    myQ.pop();
    myQ.push(9);

    // print the Queue
    while (!myQ.isempty())
    {
        cout << myQ.front() << endl;
        myQ.pop();
    }

    return 0;
}