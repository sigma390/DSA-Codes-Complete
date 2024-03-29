#include<bits/stdc++.h>
using namespace std;

void clearIth(int &n,int i){
    cout<<n<<endl;

    int msk = ~(1<<i);
    n = (n&msk);
    cout<<n<<endl;
    
}



int main(){
    int n{13};
    int i;
    cin>>i;
    clearIth(n,i);
    return 0;
}