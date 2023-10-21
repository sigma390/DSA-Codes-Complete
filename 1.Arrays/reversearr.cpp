#include<iostream>
using namespace std;

void reverse(int arr1[], int n){ // array reverse implementation order of n 
    int s{0};
    int e{n-1};
    while (s<=e)
    {
      swap(arr1[s],arr1[e]);
      s++;
      e--;
       
    }
   
}

int main(){

    
    
    int arr1[] = {1,2,3,4,5,6}; 
    int n = sizeof(arr1)/sizeof(int);
    cout<<"BEFORE REVERSE"<<endl;
    for (auto x : arr1)
    {
        cout<<x<<",";
    }
    reverse(arr1,n);
    cout<<"\nAFTER REVERSE"<<endl;
    for (auto x : arr1)
    {
        cout<<x<<",";
    }
   return 0;
 
   }
    
