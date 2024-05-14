
#include<bits/stdc++.h>
using namespace std;


void PrintPyramid(int n){
    for (int row = 0;row<2*n;row++){
        int totalCols = row>n? 2*n-row:row;
        for(int col=0;col<totalCols;col++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
}


int main(){
    PrintPyramid(5);
    return 0;
}