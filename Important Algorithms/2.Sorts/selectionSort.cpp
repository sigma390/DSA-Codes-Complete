#include<bits/stdc++.h>
using namespace std;

//main Goal is Select mIn and SORT 

void selectionSort(vector<int> &arr){
    int n = arr.size(); //total arrays 

    for(int i=0;i<=n-2;i++){
        int min = i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min = j; //updation min inde
            }
            
        }
        swap(arr[min], arr[i]); //swap the Elements So that min is Always Sorted At each Iteration
    }
}

int main(){
    vector<int> arr = {64, 25, 12, 22, 11};
    selectionSort(arr);
    cout<<"Sorted array: ";
    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0;
}