#include<bits/stdc++.h>
using namespace std;

int Titling(int n){
    //base  case 
    if (n<=3 and n>=0)
    {
        return 1;
    }
    //
    return Titling(n-1) + Titling(n-4);
    
}




int main(){
    cout<<Titling(10);
    return 0;
}