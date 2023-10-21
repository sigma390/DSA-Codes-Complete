#include<iostream>
using namespace std;

int main(){

    
    int n{0};
    cout<<"Enter no of elements to add"<<endl;
    cin>>n;
    int arr1[10] = {0}; // garbage value will be 0
   
   //input
   for (int i = 0; i < n; i++)
   {
    cin>>arr1[i];
   }

   //output

   for (int i = 0; i < n; i++)
   {
    cout<<arr1[i]<<",";
   }
   

    
    

    return 0;
}