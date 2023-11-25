#include<iostream>
#include<vector>
using namespace std;
int insSort(int arr[],int n){
    
    
    for (int i = 1; i <= n-1; i++)
    {
        int current = arr[i];
        int prev = i-1;
        while (prev>=0 && arr[prev]>current )
        {
            arr[prev+1 ] = arr[prev];
            prev = prev -1;
        }
        arr[prev+1] = current;
    }
}


int main(){

    // unsorted array
    int arr[] = {6,7,1,2,9,5,3};
    int n = sizeof(arr)/sizeof(int);

    insSort(arr,n);
    for (auto x: arr)
    {
        cout<<x<<",";
    }
    
    return 0;
}