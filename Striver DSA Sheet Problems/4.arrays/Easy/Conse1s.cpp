#include<bits/stdc++.h>
using namespace std;

int conse(vector<int>arr,int n){
    

    int lg= 0;
    int cnt = 0;
    for (auto x : arr)
    {
        if (x==1)
        {
            cnt++;
            lg = max(cnt,lg);
        }
        else if (x!=1)
        {
            cnt = 0;

        }
        
        
    }
    return lg;

}



int main(){
    vector<int> arr = {0,1,1,0,1,1,1,0,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1};
    int n = arr.size();
    int r = conse(arr,n);
    cout<<r<<endl;
    return 0;
}