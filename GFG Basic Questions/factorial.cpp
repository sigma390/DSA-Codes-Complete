#include<bits/stdc++.h>
using namespace std;

long long fact(int n){
    //base case
    if(n==0 | n==1) return 1;

    //recursive case
    return n*fact(n-1);
}


int main(){

    cout<<fact(7)<<endl;
    return 0;
}

