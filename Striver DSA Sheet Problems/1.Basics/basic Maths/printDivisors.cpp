


#include<bits/stdc++.h>
using namespace std;

vector<int> printDivisors(int n){
// Write your code here

  vector<int> arr;

    for(int i= 1;i<=n;i++){
        if(n%i==0){
            arr.push_back(i);
        }
    }
    return arr;


}



int main(){
    
    int n = 10;
   vector<int> arr2  =printDivisors(n);
   for (auto x : arr2)
   {
    cout<<x;
   }
   


    return 0;
}