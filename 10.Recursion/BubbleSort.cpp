#include<bits/stdc++.h>
using namespace std;



void bsrec(int arr [], int n , int j){

    //base case
    if (n==1)
    {
       return ; /* code */
    }

    //outer loop     
    if (j==n-1)
    {
        bsrec(arr, n-1, 0);
        return ;
    }
     //inner Logic 


     if (arr[j]>arr[j+1])
     {
        swap(arr[j], arr[j+1]);
     }
     bsrec(arr, n , j+1);

   

}

int main(){
    int arr []{-1,2,3,6,5,4};
    int n = sizeof(arr)/sizeof(int);
    
    bsrec(arr, n,0);
     for (int i = 0; i< n ;i++)
    {
        cout<<arr[i]<<",";
    }

    

    return 0;
}