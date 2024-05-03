#include<bits/stdc++.h>
using namespace std;


void Merge(vector<int>&array, int s, int e){
    int i = s;
    int m = (s+e)/2;
    int j = m+1;
    vector<int>temp{};
   
    while (i<=m and e>=j)
    {
        if (array[j]>array[i])
        {
            temp.push_back(array[i]);
            i++;
        }
        else{
            temp.push_back(array[j]);
            j++;

        }
        
    }
    //remaining elements in 1st array
    while (i<=m)
    {
        temp.push_back(array[i++]);
       
    }
    while (j<=e)
    {
        temp.push_back(array[j++]);
       
    }
    //copy into original array
    int k = 0;
    for (int idx = s; idx <=e; idx++)
    {
        array[idx] = temp[k++];
    }
    
}




void MergeSort(vector<int>&arr, int s, int e){
   
    //base case
    if (s>=e)
    {
        /* code */
        return;
    }
    int mid  =(s+e)/2;

    MergeSort(arr, s, mid);
    MergeSort(arr, mid+1, e);

    return Merge(arr,s,e);

    

}



int main(){
    vector<int>arr {1,10,2,4,3,9,6,5};
    int s = 0;
    int e = arr.size()-1;
    MergeSort(arr,s,e);
    for (auto &&x : arr)
    {
        cout<<x<<",";
    }
    
    return 0;
}