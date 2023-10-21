// simply means sharing adress not a copy if changes made in array at any point in function 
// it reflects in original array also


#include<iostream>
using namespace std;

void printArr(int arr1[], int n){ // pass by eferance in c++
    cout<<"\nin function "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<",";
    }
    
}

int main(){

    
    
    int arr1[] = {1,2,3,4,5,6}; 
    int n = sizeof(arr1)/sizeof(int);
    cout<<"in main "<<endl;
   //output
    for (auto &&x : arr1)
    {
        cout<<x<<",";
    }
    
    printArr(arr1,n);
   
    
    
    

    return 0;
}