#include<bits/stdc++.h>
using namespace std;

void clearRangeIBits(int &n,int i,int j){
   
    int msk1 = ~0<<(j+1);
    int msk2 = (1<<i)-1;

    int msk = msk1 | msk2 ;

    n = (n&msk);
    cout<<n<<endl;
    
}



int main(){
    int n{31};
    int i;
    cin>>i;
    int j;
    cin>>j;
   clearRangeIBits(n,i,j);
    return 0;
}