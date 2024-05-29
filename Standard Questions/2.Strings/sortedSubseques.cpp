#include<bits/stdc++.h>
using namespace std;

void subseq(string s, string o ,  vector<string> &v){


    //base case
    if (s.size()==0)
    {
        v.push_back(o);
        return;
    }

    //rec case
    char ch = s[0];
    string reducedInput = s.substr(1);
    //include current letter
    subseq(reducedInput, o+ch, v);
    //exclude current letter
    subseq(reducedInput, o, v);

}

bool compare(string s1 ,  string s2){
    if (s1.length()==s2.length())
    {
        return s2>s1;
    }
    return s1.length()< s2.length();
    
}




int main(){

    string s ;
    cin>>s;
    vector<string> v;
    string output = "";
    subseq(s,output,v);
    //sort

    sort(v.begin(), v.end(), compare);
    
    for (auto x : v)
    {
        cout<<x<<",";
    }
    
    
    return 0;
}