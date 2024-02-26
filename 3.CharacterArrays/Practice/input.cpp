
#include<bits/stdc++.h>
using namespace std;


int main(){

    char para[1000];

    char temp  = cin.get();
    int len{1};
    while (temp != '#')
    {
       para[len++] = temp;
        temp = cin.get();
    }

    cout<<para<<endl;
    cout<<len<<endl;
    
    return 0;

}