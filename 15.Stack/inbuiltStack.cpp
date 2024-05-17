#include<bits/stdc++.h>
using namespace std;


int main(){
    stack<string> s;
    s.push("om");
    s.push("namah");
    s.push("shivay");
    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    
    return 0;
}