#include<bits/stdc++.h>
using namespace std;

bool chkprime(int n){

    if (n<2)
    {
        /* code */
        return false;
    }
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n%i==0)
        {
            return false;
        }
        
    }
    
    return true;
    


    return false;
}

int main(){
    int n;
    cin>>n;
    cout<<chkprime(n);

    

    return 0;
}