
#include<bits/stdc++.h>
using namespace std;


vector<int>Union(vector<int>a ,vector<int>b){
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    for (auto it : a)
    {
        st.insert(it);
    }

     for (auto it : b)
    {
        st.insert(it);
    }

    vector<int>un;
    for (auto x : st)
    {
        un.push_back(x);
    }

     
    
    
    return un; 
}




int main(){

    vector<int>a = {1,1,2,3,4,5};
    vector<int>b = {6,8,9};

    vector<int> c = Union(a,b);
    for (auto &&i : c)
    {
        cout<<i<<",";
    }
    





    return 0;
}