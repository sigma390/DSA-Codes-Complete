#include<bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
    int len = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
      
        {
            int s = 0;
            for (int K = i; K<=j; K++)
            {
                s = s+arr[K];
            }
            if (s==k)
            {
                len = max(len,j-i+1);
            }
            
            
        }
        
    }
    return len;
    
   
}



int main(){
    vector<int> arr = {1,1,1,1,2,2,4};

    int k= 4;
    
   int res =  getLongestSubarray(arr, k);
   cout<<res;

    return 0;
}