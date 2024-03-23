#include<bits/stdc++.h>
using namespace std;


int main(){
    
    pair<int,int>p = {1,2};
    cout<<p.first<<endl;
    //NESTING PAIRS

    pair<int,pair<int,int>>a = {1,{2,3}};
    cout<<a.second.first<<endl;

    //array Of Pairs
    pair<int , int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[2].first<<endl;

    
    return 0;
}