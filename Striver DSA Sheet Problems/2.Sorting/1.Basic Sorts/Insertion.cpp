#include<bits/stdc++.h>
using namespace std;




void InsertSort(vector<int>&arr){
    int n = arr.size();
    int j{0};
    for (int i = 1; i < n; i++)

    {
        j =  i-1;
        while (j>=0 && arr[j]>=arr[j+1])
        {
            swap(arr[j], arr[j+1]);
            j--;
        }
        
        
    }
    

}

int main(){
    vector<int>arr {1,10,23,5,7};
    InsertSort(arr);
    for (auto x : arr)
    {
        cout<<x<<",";
    }
    
    return 0;
}