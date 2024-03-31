#include<bits/stdc++.h>
using namespace std;

bool PowerOfTwo(int &n){
    
    if((n & (n-1))==0){
        return true;
    }
    else{
        return false;
    }
   
}




int main(){

    int n;
    cin>>n;

    

   bool res =  PowerOfTwo(n);
    if (res==1)
    {
        cout<<"Its power of Two"<<endl;
    }
    else{
        cout<<"Its NOT A power of Two"<<endl;
    }
    


    return 0;
}