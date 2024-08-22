#include <bits/stdc++.h>
#include "queue.h"
using namespace std;

int main()
{
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getRear() << endl;

    q.remove();
    cout << "Front element after removal: " << q.getFront() << endl;

    return 0;
}
