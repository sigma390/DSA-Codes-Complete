

#include<bits/stdc++.h>
using namespace std;

int BinString(int n){
    //base case
    if (n==1)
    {
        return 2;
    }
    //if length is 0 then its also a case means 0
    if (n==0)
    {
        return 1;
    }
    
    //recursive
    int sub2 =  BinString(n-1);
    int sub = BinString(n-2);
    
    return sub+sub2 ;
    
}

int main(){
    cout<<BinString(2);
    return 0;
}