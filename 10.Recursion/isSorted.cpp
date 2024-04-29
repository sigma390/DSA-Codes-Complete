#include<bits/stdc++.h>
using namespace std;



bool isSorted(int arr[], int n){
    if (n==1 or n==0)
    {
        return true;
    }
     if (arr[0] < arr[1]) {
        return isSorted(arr + 1, n - 1);
    }
    
    
    return false;
}




int main(){
    int arr[] = {1,2,4,5,3,6,78,9};
    int arr2[]= {1,2,3,4,5,6,7};
    int n = sizeof(arr2)/sizeof(int);
    cout<<isSorted(arr2, n);
    return 0;
}