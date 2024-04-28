#include<bits/stdc++.h>

using namespace std;



vector<int> countFrequency(int n,vector<int> &nums){
    // Write your code here.


     unordered_map<int, int> countMap;
     vector<int>res;
     for(auto x : nums){
         if(countMap.count(x)==0){
             countMap[x]=1;
         }
         else{
             countMap[x]+=1;

         }
     }
    for (const auto& pair : countMap) {
        // Access the key and value using pair.first and pair.second
        res.push_back(pair.second);
    }
     
     return res;

}

int main(){

    vector<int> arr = {
        1,2,3,3,2,4
    };
    int n = arr.size();

    vector<int> arry = countFrequency(n, arr);
    for (auto x : arry)
    {
        cout<<x<<",";
    }
    





}