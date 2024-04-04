#include<bits/stdc++.h>
using namespace std;



string evenOdd(int n){
    return (n & 1) == 1 ? "odd" : "even";

    
}
 



int main(){
    cout<<evenOdd(12)<<endl;
    cout<<evenOdd(11);
    return 0;
}