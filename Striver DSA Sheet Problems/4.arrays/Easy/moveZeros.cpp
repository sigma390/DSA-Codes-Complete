#include<bits/stdc++.h>
using namespace std;


vector<int> MovexEROS(vector<int>& arr, int n) {
    // Write your code here.
    vector<int> temp;
    vector<int>mod;

   for (int i = 0; i < n; i++)
   {
    if (arr[i]==0)
    {
        mod.push_back(arr[i]);
    }else{
        temp.push_back(arr[i]);
    }
    
    
   }
   
   

   for (int i = 0; i < mod.size(); i++)
   {
    temp.push_back(mod[i]);
   }
   
   
  
    return temp;
   

    
}




int main(){

    vector<int> arr = {0,1,0,3,12};
    int n = arr.size();

    vector<int> ma = MovexEROS(arr,n);
    for (auto &&i : ma)
    {
        cout<<i<<",";
    }
    







    return 0;
}