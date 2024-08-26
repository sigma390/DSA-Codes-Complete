#include<bits/stdc++.h>
using namespace std;


void bubbleSort(vector<int > &arr){
    int n = arr.size();
    for(int i=n-1;i>=0;i--){ //i starts From end So that j goes till that point as the max Elemnt is send to back 

    //and J starts From o and Goes till i-1 thats , 2nd last Element
        for (int j = 0; j <= i-1; j++)
        {
            if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
        }
        
    }


}

int main(){
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(arr);
    for (auto x : arr)
    {
        cout<<x<<" ";
    }
    
    return 0;
}