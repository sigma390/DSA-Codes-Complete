#include<bits/stdc++.h>
using namespace std;

int getIthBit(int n, int i){
    int mask = (1<<i);
    return (mask&n)>0?1:0;
}




int main(){

    int n{5};
    int i;
    cin>>i;
    cout<<getIthBit(n,i);



    return 0;
}