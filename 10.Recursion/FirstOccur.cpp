#include<bits/stdc++.h>
using namespace std;
int firstOccur(int arr[], int n ,  int k){
    //base case
   if (n==0)
   {
    return -1;
   }
   //rec case
   
   if(arr[0]==k){
        return 0;
    }
    
    int subIndex = firstOccur(arr+1, n-1, k);
    if (subIndex!=-1)
    {
        return subIndex+1;
    }

    return -1;
        
    
}




int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int k = 3;
    cout<<firstOccur(arr, n, k);
    return 0;
}