#include<bits/stdc++.h>
using namespace std;

void clearIth(int &n,int i){
    cout<<n<<endl;

    int msk = ~(1<<i);
    n = (n&msk);
    cout<<n<<endl;
}

void UpdateIth(int &n, int i , int v){
    clearIth(n,i);
    int msk = v<<i;
    n = n|msk;
}



int main(){
    int n{13};
    int i;
    cin>>i;
    int v{0};
    cin>>v;
    UpdateIth(n,i,v);
    cout<<n;    



    return 0;
}