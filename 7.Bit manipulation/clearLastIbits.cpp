#include<bits/stdc++.h>
using namespace std;

void clearLastIBits(int &n,int i){
   

    int msk = ~0<<i;
    n = (n&msk);
    cout<<n<<endl;
    
}



int main(){
    int n{15};
    int i;
    cin>>i;
   clearLastIBits(n,i);
    return 0;
}