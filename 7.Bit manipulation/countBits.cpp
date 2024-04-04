
#include<bits/stdc++.h>
using namespace std;


int countBits(int n){
    int cnt= 0;
    while (n>0)
    {
    int lastBit = n&1;
    cnt+=lastBit;
    n=n>>1;

    }
    return cnt;
    


}

int main(){
    int n = 9;
    cout<<countBits(n)<<endl;
    return 0;
}