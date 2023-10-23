//BRUTEFORCE APPROACH N^3 T.C

#include<iostream>
using namespace std;

int largestSubrraySum(int arr[],int n){
    int largestSum{0};

    for (int i = 0; i < n; i++)
    {
        
        for(int j = i; j < n; j++)
        {
            int subsum = 0;
            for (int k = i; k <= j; k++)
            {
                subsum+=arr[k];
            }
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