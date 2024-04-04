#include<bits/stdc++.h>
using namespace std;


int fastExpo(int a , int n){
    int ans = 1;
    while (n>0)
    {
        int lstbit = n&1;
        if (lstbit)
        {
            ans = ans*a;
        }
        a = a*a;
        n=n>>1;
        
    }
    return ans;
    



}





int main(){
    int n=5, a=3;
    cout<<fastExpo(3,5);
    return 0;
}