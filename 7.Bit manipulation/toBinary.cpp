#include<bits/stdc++.h>
using namespace std;

int toBin(int n){

    int ans = 0;
    int pow = 1;
    while (n>0)
    {
        int lstbit = n&1;
        ans += lstbit*pow;
        pow = pow*10;
        n = n>>1;
    }
    
    return ans;



}




int main(){
    cout<<toBin(9);
    return 0;
}