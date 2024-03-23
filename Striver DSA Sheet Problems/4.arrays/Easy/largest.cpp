#include<bits/stdc++.h>
using namespace std;
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(), arr.end());
   
    
    
    return arr[n-1];
}


int main(){
    vector<int> arr = {1,75,6,1,89,44,23,75,895};
    int n = arr.size();
    int r = largestElement(arr, n);
    cout<<r<<endl;

    return 0;
}