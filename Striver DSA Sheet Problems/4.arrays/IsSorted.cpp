#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> &arr, int n) {
    // Write your code here.
   
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        if (it++<it)
        {
            return false;
        }
        
    }
    return true;
    
   
    
    
   
}


int main(){
    vector<int> arr = {1,75,6,1,89,44,23,75,895};
    int n = arr.size();
    bool r = isSorted(arr, n);
    cout<<r<<endl;

    return 0;
}