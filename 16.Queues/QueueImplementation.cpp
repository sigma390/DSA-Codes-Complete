#include<bits/stdc++.h>
#include"queue.h"

using namespace std;


int main(){

    Queue myQ(7);
    myQ.push_rear(1);
    myQ.push_rear(2);
    myQ.push_rear(3);
    myQ.push_rear(4);
    myQ.push_rear(5);
    myQ.push_rear(6);
    myQ.push_rear(7);
    myQ.push_rear(8);
    myQ.pop();
    myQ.pop();
    myQ.push_rear(9);

    //print the Queue
    while (!myQ.empty())
    {
        cout<<myQ.getfront()<<endl;
        myQ.pop();
    }
    

    

    return 0;
}