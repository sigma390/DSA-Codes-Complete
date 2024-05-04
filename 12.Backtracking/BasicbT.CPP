#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){
    for (int k = 0; k < n; k++)
       {
        cout<<arr[k]<<",";
       }
       
}
void fillarr(int arr[], int i , int n , int val){
    //base case
    if (i==n)
    {
    printArr(arr, n);
       return ;
       
    }
    //rec case
    arr[i] = val;
    fillarr(arr, i+1, n, val+1);
    //backtracking step
    arr[i] = -1 *arr[i];

    
}


int main(){
    int arr[10]{0};
    int n;
    cin>>n;
    //call 
    fillarr(arr, 0, n, 1);
    cout<<"\n";
    printArr(arr, n);
    
    return 0;
}