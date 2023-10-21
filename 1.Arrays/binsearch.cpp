#include<iostream>
using namespace std;

int BINsearch(int arr1[], int n,int k){ // BINARY search implementation order of n 
//works only on sorted arrays
    int s{0};
    int e{n-1};
    while (s<=e)
    {
       int m = (s+e)/2;
       if (arr1[m]== k)
       {
        return m;
       }
       else if (arr1[m]< k)
       {
        s = m+1;
        
       }
       else{
        e = m-1;
        
       }
       
       
    }
    return -1;  
   
}

int main(){

    
    
    int arr1[] = {1,2,3,4,5,6}; 
    int n = sizeof(arr1)/sizeof(int);
    int k{0}; 
    cout<<"ENTER KEY TO SEARCH"<<endl;
    cin>>k;
    
    int result = BINsearch(arr1,n,k);
   if (result !=-1)
   {
    cout<<"ITS PRESENT AT "<<result<<endl;
   }
   else{
    cout<<"NOT PRESENT FUK OFF"<<endl;
   }
    return 0;
}