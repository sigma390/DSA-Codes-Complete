
#include<bits/stdc++.h>
using namespace std;


int bsearch(vector<int> arr , int k){
    //start and End 
    int n = arr.size();
    int s = 0;
    int e = n-1;
    while (s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==k) return mid;
        else if(arr[mid] > k){
            e = mid-1;
        }else{
            s= mid+1;
        }

    }
    return -1;
    
}



int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<bsearch(arr,10)<<endl;
    return 0;
}