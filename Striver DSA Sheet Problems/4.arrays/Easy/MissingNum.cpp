#include<bits/stdc++.h>
using namespace std;

int missing(vector<int> nums,int n){

    int flg = 0;
    for (int i = 1; i <=n; i++)
    {
        flg=0;
        for (int j = 0; j <= n-1; j++)
        {
            if (nums[j]==i)
            {
                flg=1;
                break;
            }
            
        }
        if (flg==0) //when numebr doest exist
        {
            return i;
        }   
        
    } 
    return -1;
   


}


int main(){
    vector<int>nums = {1,2,3,4,5};
    int n = 6;
    int r = missing(nums,n);
    cout<<r<<endl;
}