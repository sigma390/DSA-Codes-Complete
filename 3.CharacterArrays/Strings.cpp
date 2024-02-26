#include<bits/stdc++.h>
using namespace std;

int main(){

    int n{0};
    cin>>n;
    vector<string> srayy; // string array

    string temp; // casual string

    cin.get(); // resolve trap

    while(n--){
        getline(cin,temp); //input function 
        srayy.push_back(temp); // push into vector
    }
    for (auto x : srayy)
    {
        cout<<x<<","; // print each word
    }
    

    return 0;
}