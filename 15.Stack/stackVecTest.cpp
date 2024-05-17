#include<bits/stdc++.h>
#include"StackV.h"
using namespace std;


int main(){

    Stack<int>s;
    s.Push(1);
    s.Push(2);
    s.Push(3);

    s.Push(4);
    s.Push(5);



    while (!s.isEmpty())
    {
        cout<<s.top()<<endl;
        s.Pop();
    }
    



    return 0;
}