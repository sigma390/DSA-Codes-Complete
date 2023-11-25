#include<iostream>
using namespace std;

int largestSubrraySum(int arr[],int n){

    

    int largestSum{0};
    int currSum{0};

    for (int i = 0; i < n; i++)
    {
        currSum = currSum+arr[i];
        if (currSum<0)
        {
            currSum = 0;
        }
        
            largestSum = max(largestSum,currSum);
            
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