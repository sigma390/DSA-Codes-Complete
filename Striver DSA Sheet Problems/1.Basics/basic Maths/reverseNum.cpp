

#include<bits/stdc++.h>

using namespace std;


int main(){
    int n = 1023;
    string s = to_string(n);
    reverse(s.begin(), s.end());
    
    int r = stoi(s);
    cout<<r<<endl;
   

    return 0;
}