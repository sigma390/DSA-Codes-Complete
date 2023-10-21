#include<iostream>
using namespace std;

int linsearch(int arr1[], int n,int k){ // linear search implementation order of n
    for (int i = 0; i < n; i++)
    {
        if (arr1[i]==k)
        {
            return 1;
        }
        
    }
    return 0;
    
    
}

int main(){

    
    
    int arr1[] = {1,2,3,4,5,6}; 
    int n = sizeof(arr1)/sizeof(int);
    int k{0}; 
    cout<<"ENTER KEY TO SEARCH"<<endl;
    cin>>k;
    
    int result = linsearch(arr1,n,k);
   if (result==1)
   {
    cout<<"ITS PRESENT"<<endl;
   }
   else{
    cout<<"NOT PRESENT FUK OFF"<<endl;
   }
    return 0;
}