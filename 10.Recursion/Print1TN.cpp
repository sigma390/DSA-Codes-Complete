#include<bits/stdc++.h>
using namespace std;

void PrintDec(int n){
    if(n == 0){
        cout<<"Done!!!"<<endl;
    }
    else{
        cout<<n<<endl;
        PrintDec(n-1);

    }
   
    
}

void PrintIncre(int n, int i){
 

    if (i ==n+1)
    {
        cout<<"Done!!!"<<endl;
    }
    else{

       
        cout<<i<<endl;
         PrintIncre(n,i+1);


    
    }
    
}





int main(){
    int n = 10;
    PrintDec(n);
    int i{1};
    PrintIncre(n,i);

    return 0;
}