#include<bits/stdc++.h>
using namespace std;

long long Power(int a , int n){
    if (n==0)
    {
        return 1;
    }
    return a*Power(a, n-1);
    
}

long long FasterPower(int a, int n){
    if (n==0){
        return 1;}

    int subPrblm = FasterPower(a, n/2);
    int SubSquare = subPrblm*subPrblm;
    if(n&1){
        return a*SubSquare;
    }
    else{
        return SubSquare;
    }

    
    
}



int main(){
    
    int a {0};
    cin>>a;
    cout<<Power(a, 5)<<endl;
    cout<<FasterPower(a,10);
 
    return 0;
}