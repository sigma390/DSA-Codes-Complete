#include<bits/stdc++.h>
using namespace std;


int Partition(vector<int>&arr, int s , int e){
    int pv = arr[e];
    int i  = s-1;
    for (int j = s; j < e ; j++)
    {
        if (arr[j]<pv)
        {
            i++;
            swap(arr[i],arr[j]);

        }
        
    }
    swap(arr[i+1], arr[e]);
    return i+1;
    

}

void QuickSort(vector<int>&arr, int s, int e){

    //base case
    if (s>=e)
    {
        return;
    }

    //get pivot point position
    int p = Partition(arr, s ,e );
    //sort 
    QuickSort(arr, s, p-1);
    QuickSort(arr, p+1, e);


    

}



int main(){
    vector<int>arr {10,2,4,5,9,8,6,3};
    int s = 0;
    int e = arr.size()-1;
    QuickSort(arr, s ,e);
    for (auto x : arr)
    {
        cout<<x<<",";
    }
    
    return 0;
}