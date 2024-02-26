#include<bits/stdc++.h>
using namespace std;


string Encoding(string str){
    int count{0};
    string s;
    int n =str.length();

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (i< n-1 and str[i]==str[i+1] )
        {
            count++;
            i++;
        }
        s= s+ str[i]+to_string(count);
        
    }


    if (s.length()>str.length())
    {
        return str;

    }
    return s;
    
    
    







};

int main(){

    string s = "aaabbcccdd"; //input string
    string a = Encoding(s);
    cout<<a<<endl;

    return 0;
}