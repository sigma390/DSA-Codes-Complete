#include<bits/stdc++.h>
using namespace std;


int main(){
    //take input 
    string inpt;
    getline(cin, inpt);

    //stream string object
     
    stringstream ss(inpt);
    //token to store a token
    string token;
    vector<string>tokens;
    while (getline(ss, token , ' '))
    {
        tokens.push_back(token);
    }

    //print 
    for (auto x : tokens)
    {
        cout<<x<<",";
    }
    
    


    return 0;
}