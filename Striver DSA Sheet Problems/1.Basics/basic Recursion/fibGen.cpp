
#include<bits/stdc++.h>
using namespace std;

// T O(2pown) ,  s O(n);

int fib(int m){
    if (m==0 | m==1)
    {
        return m;
    }
    
    return fib(m-1)+fib(m-2);
}



vector<int> fibSeq(int n){
  vector <int> res;
  int m=0;





  while (n>=m)
  {
    int resu = fib(m);
    res.push_back(resu);
    m++;

    
  }
  return res;
  
    
}



int main(){

    int n;
    cin>>n;
    vector<int>rr = fibSeq( n);
    for (auto x : rr)
    {
        cout<<x<<",";
    }
    


    return 0;
}