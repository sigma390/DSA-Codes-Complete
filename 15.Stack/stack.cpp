#include<bits/stdc++.h>
#include"StackLL.h"
using namespace std;


int main(){

    Stack<char>s;
    s.Push('O');
    s.Push('m');
    s.Push('n');
    s.Push('a');
    s.Push('m');
    s.Push('s');
    s.Push('h');
    s.Push('i');
    s.Push('v');
    s.Push('a');
    s.Push('y');

    while (!s.isEmpty())
    {
        cout<<s.top()<<endl;
        s.Pop();
    }
    



    return 0;
}