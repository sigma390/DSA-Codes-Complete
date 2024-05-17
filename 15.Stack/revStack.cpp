#include<bits/stdc++.h>
using namespace std;


void pushatEnd(stack<int> &s, int data){
//base case last call

if(s.empty()){
    s.push(data);
    return;
}

//operation
int tmp = s.top();
s.pop();
//rec call
pushatEnd(s,data);

//backtracking 
s.push(tmp);





}

void revStack(stack<int> &s){
    //base case
    //if stack is empty retuyrn 
    if (s.empty())
    {
        /* code */
        return;
    }
    //pop that element and store into temp
    int tmp = s.top();
    s.pop();
    //rec call to rev a smaller stack
    revStack(s);
    //backtrack
    pushatEnd(s,tmp); //push tmp as data

    
}








int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
  

    cout<<"====================>>>>>>>>>>>>"<<endl;
    revStack(s);

    // pushatEnd(s,11);
    while (!s.empty())
    {
        cout<<s.top()<<endl;

        s.pop();
    }
    
    return 0;
}