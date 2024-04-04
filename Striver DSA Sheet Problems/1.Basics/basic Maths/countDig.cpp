#include<bits/stdc++.h>
using namespace std;


int cntDig(int n){
    int cnt = 0;
    while (n>0)
    {
        n = n/10;
        cnt++;
    }
    
    return cnt;
}


int main(){
    int n = 111111;
    int res = cntDig(n);
    cout<<res<<endl;








    return 0;
}