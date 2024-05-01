#include<bits/stdc++.h>
using namespace std;


int lastOcc(int arr[] ,  int n , int k)
{
    if(n==0){
        return -1;

    }
    int sub = lastOcc(arr+1, n-1, k);
    if (sub==-1)
    {
        if (k==arr[0])
        {
            return 0;
        }
        else{
            return -1;
        }
        
    }
    else{
        return sub+1;
    }
    

}


int main(){

    int arr [] = {1,2,3,4,5,4,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    cout<<lastOcc(arr,n,4);
    

    return 0;
}