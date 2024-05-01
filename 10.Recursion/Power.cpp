#include<bits/stdc++.h>
using namespace std;

long long Power(int a , int n){
    if (n==0)
    {
        return 1;
    }
    return a*Power(a, n-1);
    
}





int main(){
    
    int a {0};
    cin>>a;
    cout<<Power(a, 5);
 
    return 0;
}