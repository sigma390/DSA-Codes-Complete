#include<iostream>
using namespace std;

int largestSubrraySum(int arr[],int n){

    int prefixArr[n] = {0};
    prefixArr[0]= arr[0];
    for (int i = 1; i < n; i++)
    {
       prefixArr[i] = prefixArr[i-1] + arr[i];
    }
    

    int largestSum{0};

    for (int i = 0; i < n; i++)
    {
        
        for(int j = i; j < n; j++)
        {
          int subsum = i>0?prefixArr[j] - prefixArr[i-1]:prefixArr[j];
            largestSum = max(largestSum,subsum);
            
        }
    }
return largestSum;  
}


int main(){

    int arr[] = {10,20,-45,-78,30,40};
    int n = sizeof(arr)/sizeof(int);

    int res = largestSubrraySum(arr,n);
    cout<<"\n"<<res;


    return 0;

}