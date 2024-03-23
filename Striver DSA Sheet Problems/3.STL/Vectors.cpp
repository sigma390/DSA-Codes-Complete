#include<bits/stdc++.h>
using namespace std;


int main(){
    
   vector<int> v;
   //vector of pairs
   vector<pair<int,int>> a;
   a.push_back({1,2});
   a.emplace_back(3,4);

   cout<<a[0].first<<","<<a[1].second<<endl;
   
    //initialisation
    vector<string> str{10,"pappu"};
    for (auto &&x : str)
    {
        cout<<x<<",";
    }
    
    
    return 0;
}