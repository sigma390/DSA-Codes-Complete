#include<bits/stdc++.h>
using namespace std;


int main(){
    
    //lets take a vector

    vector<int> a{1,2,3,4,5,6};

    //========================> Iterators <================================
    //begin Iterator
    vector<int>::iterator it = a.begin();
    it++;
    cout<<*(it)<<" ";
    it = it+2;
    cout<<*(it)<<" ";

    //end iterator
    //points to last +1 position 
    vector<int>::iterator it1 = a.end();
    it1--;
    cout<<*(it1)<<endl;

    //print vextor using iterator

    //bot way
    for(vector<int> ::iterator n = a.begin();n!=a.end(); n++){
        cout<<*(n)<<" ";
    }
    // Med way
    cout<<"\n";
    for (auto i = a.begin(); i!= a.end(); i++)
    {
        cout<<*(i)<<" ";
    }
    //pro way
     cout<<"\n";
    for (auto &&i : a)
    {
        cout<<i<<" ";
    }

    //========================> Vector Functions <========================
    //erase 
    cout<<"\n";
    a.erase(a.begin(), a.begin()+2);
    for (auto &&i : a)
    {
        cout<<i<<" ";
    }
    





    return 0;
}