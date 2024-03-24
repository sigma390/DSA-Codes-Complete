#include<bits/stdc++.h>
using namespace std;


vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.

    int a = arr[0];
    for (int i = 0; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=a;
    
    return arr;


    
}




int main(){

    vector<int> arr = {1,2,3,4,5,6,7,9};
    int n = arr.size();

    rotateArray(arr,n);
    for (auto &&i : arr)
    {
        cout<<i<<",";
    }
    







    return 0;
}