#include<iostream>
#include<vector>
using namespace std;
void bsort(int arr[],int n){
    for (int times = 0; times < n-1; times++)
    {
        for (int j = 0; j < n-times -1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    
}


int main(){

    int arr[] = {6,7,1,2,9,5,3};
    int n = sizeof(arr)/sizeof(int);
    bsort(arr,n);

    for (auto x : arr)
    {
        cout<<x<<',';
    }
    
    return 0;

}