#include<bits/stdc++.h>
using namespace std;


void PrintRAT(int n){
    for (int row = n;row>=1;row--){
        for(int col=1;col<=row;col++){
            cout<<col<<" ";
        }
        cout<<"\n";
    }
}


int main(){
    PrintRAT(5);
    return 0;
}