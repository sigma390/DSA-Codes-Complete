#include<iostream>
#include<vector>
using namespace std;
void Bubble(int arr[],int n){
    
    
    for (int i = 0; i < n-1; i++)
    {
        
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }

}


int main(){

    // unsorted array
    int arr[] = {6,7,1,2,9,5,3};
    int n = sizeof(arr)/sizeof(int);

    Bubble(arr,n);
    for (auto x: arr)
    {
        cout<<x<<",";
    }
    
    return 0;
}